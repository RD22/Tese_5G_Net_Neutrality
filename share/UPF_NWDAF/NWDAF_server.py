class Subscription:
	def __init__(self, Notification_Correlation_ID, Stream_A, Stream_B, Analytics_ID, 
			Subscription_Correlation_ID, Target_Period):
		self.Notification_Correlation_ID = Notification_Correlation_ID
		self.Stream_A = Stream_A
		self.Stream_B = Stream_B
		self.Analytics_ID = Analytics_ID
		self.Subscription_Correlation_ID = Subscription_Correlation_ID
		self.Target_Period = Target_Period

from quart import Quart, send_file, request, Response, render_template
from hypercorn.config import Config
from hypercorn.asyncio import serve
import asyncio
import subprocess
import os
import secrets
import signal
import logging
import matplotlib.pyplot as plt
import statistics
import numpy as np
from urllib.parse import unquote
import shlex

logger = logging.getLogger()
logger.setLevel(logging.DEBUG)

# Create a FileHandler and set the file name and mode (append or overwrite)
file_handler = logging.FileHandler('log_file.txt', mode='w')  # 'a' for append, 'w' for overwrite

# Create a Formatter and set the format for the log messages
formatter = logging.Formatter('%(asctime)s - %(levelname)s - %(message)s')

# Set the formatter for the FileHandler
file_handler.setFormatter(formatter)

# Add the FileHandler to the logger
logger.addHandler(file_handler)


IP_address = "192.168.70.140:443"
certfile_path = 'openssl/certificate.crt'
keyfile_path = 'openssl/private.key'

app = Quart(__name__,static_folder='/', template_folder = '/UPF_NWDAF/')

### global variables ###

subprocess_instance = None
subprocess_completed = False
first_instance = None
stream_A = ""
stream_B = ""
Custom_A = False
Custom_B = False


# Define a function to handle keyboard interrupts (Ctrl+C)

def handle_keyboard_interrupt():
	global subprocess_instance
	if subprocess_instance is not None:
		subprocess_instance.terminate()
	
	# Perform any other cleanup operations if needed
	#kill -9 $(ps -ef | grep -w "python3 NWDAF_server.py" | head -n 1 | awk '{print $2}')
	#subprocess.run(command)
	# Raise SystemExit to exit the process
		raise SystemExit

#### SERVER FILES ####
	
# HOMEPAGE #

@app.route('/')
async def home():
	global subprocess_instance
	if subprocess_instance is not None:
		subprocess_instance.terminate()
		subprocess_instance = None
		global sub
		Subscription_Correlation_ID = sub.Subscription_Correlation_ID
		message = "Successfully unsubscribed from Subscription = %s" % (Subscription_Correlation_ID)
		sub = None
		return """
	    	<html>
		    <body>
			<h2>{message}</h2>
			<script>
			    setTimeout(function() {{
				window.location.href = "/";
			    }}, 2000);  // Redirect after 2 seconds
		    	</script>
		    </body>
		</html>
		""".format(message=message)
	else:
		response = await send_file('index.html')
		response.headers['Cache-Control'] = 'no-cache, no-store, must-revalidate'
		response.headers['Pragma'] = 'no-cache'
		response.headers['Expires'] = '0'
		return response


#### Subscription / Unsubscription  ####

@app.route('/handler', methods=['GET'])
async def handler():
	# Get the value of the 'action' query parameter from the URL
	action = request.args.get('action', '')
	global stream_A
	global stream_B
	global subprocess_completed  
	global subprocess_instance 
	global Custom_A
	global Custom_B
	
	stream_A =  unquote(request.args.get('stream1', ''))
	stream_B =  unquote(request.args.get('stream2', ''))
	
	if len(stream_A.split()) > 1 :
		Custom_A = True	
	else:
		Custom_A = False
		
	if len(stream_B.split()) > 1 :
		Custom_B = True
	else:
		Custom_B = False
		
	subprocess_completed = False
	
	# Check the value of 'action' and return the appropriate response
	if action == 'Nnwdaf_AnalyticsSubscription_Subscribe':
		if subprocess_instance is not None:
			subprocess_instance.terminate()
			subprocess_instance = None
	
		## start subscription object ##
	
		Notification_Correlation_ID = request.args.get('Notification_Correlation_ID', '')
		Analytics_ID = request.args.get('Analytics_ID', '')
		Subscription_Correlation_ID = str(secrets.token_hex(16))
		Target_Period = request.args.get('Target_Period', '')
		global sub
		sub = Subscription(Notification_Correlation_ID, stream_A, stream_B, Analytics_ID, 
		Subscription_Correlation_ID, Target_Period)
		
		command = shlex.split('docker exec vpp-upf /bin/bash -c \'/UPF_NWDAF/captures.sh "{}" "{}" "{}" "{}"; '
		'$SHELL &\''.format(stream_A, stream_B, subprocess_completed, 0))
		first_instance = subprocess.run(command)
		subprocess_completed = True
		
		
		if (int(Target_Period) > 5) :
			command = shlex.split('docker exec vpp-upf /bin/bash -c \'/UPF_NWDAF/captures.sh "{}" "{}" "{}" "{}"; '
			'$SHELL &\''.format(stream_A, stream_B, subprocess_completed, Target_Period))
			subprocess_instance = subprocess.Popen(command)
		
		html = await render_template('analytics.html', Subscription_Correlation_ID = 
			Subscription_Correlation_ID, Target_Period = Target_Period)
		
		response = Response(html)
		
		response.headers['Cache-Control'] = 'no-cache, no-store, must-revalidate'
		response.headers['Pragma'] = 'no-cache'
		response.headers['Expires'] = '0'
		return response  
	elif action == 'Nnwdaf_AnalyticsSubscription_Unsubscribe':
		if subprocess_instance is not None:
			subprocess_instance
			subprocess_instance.terminate()
			subprocess_instance = None
		sub = None
		Subscription_Correlation_ID = request.args.get('Subscription_Correlation_ID', '')
		message = "Successfully unsubscribed from Subscription = %s" % (Subscription_Correlation_ID)
		return """
	    	<html>
		    <body>
			<h2>{message}</h2>
			<script>
			    setTimeout(function() {{
				window.location.href = "/";
			    }}, 2000);  // Redirect after 2 seconds
		    	</script>
		    </body>
		</html>
		""".format(message=message)
	else:
		return "Error while trying to subscribe"
		
#### Histograms ####		

@app.route('/delay_histogram_Stream_A/<stream_name>')
async def get_delay_Stream_A_histogram(stream_name):
	global stream_A
	global Custom_A
	
	if Custom_A == True:
		file_path = "/UPF_NWDAF/delay_histogram_custom_A.png"
	else:
		file_path = "/UPF_NWDAF/delay_histogram_" + stream_A + ".png"
	
	global subprocess_completed
	if subprocess_completed and os.path.exists(file_path):
		return await send_file(file_path, mimetype='image/png')
	elif subprocess_completed and not os.path.exists(file_path):
		return await send_file('/UPF_NWDAF/empty_placeholder.png', mimetype='image/png')
	else:
		return "Please wait until the subprocess completes."


@app.route('/delay_histogram_Stream_B/<stream_name>')
async def get_delay_Stream_B_histogram(stream_name):
	global stream_B
	
	global Custom_B
	
	if Custom_B == True:
		file_path = "/UPF_NWDAF/delay_histogram_custom_B.png"
	else:
		file_path = "/UPF_NWDAF/delay_histogram_" + stream_B + ".png"
		
	global subprocess_completed
	if subprocess_completed and os.path.exists(file_path):
		return await send_file(file_path, mimetype='image/png')
	elif subprocess_completed and not os.path.exists(file_path):
		return await send_file('/UPF_NWDAF/empty_placeholder.png', mimetype='image/png')
	else:
		return "Please wait until the subprocess completes."

#### Throughput Graphs ####

@app.route('/bitrate_graph_Stream_A/<stream_name>')
async def get_bitrate_graph_Stream_A(stream_name):
	global stream_A
	
	global Custom_A
	
	if Custom_A == True:
		file_path = "/UPF_NWDAF/bitrate_graph_custom_A.png"
	else:
		file_path = "/UPF_NWDAF/bitrate_graph_" + stream_A + ".png"
		

	global subprocess_completed
	if subprocess_completed and os.path.exists(file_path):
		return await send_file(file_path, mimetype='image/png')
	elif subprocess_completed and not os.path.exists(file_path):
		return await send_file('/UPF_NWDAF/empty_placeholder.png', mimetype='image/png')
	else:
		return "Please wait until the subprocess completes."

@app.route('/bitrate_graph_Stream_B/<stream_name>')
async def get_bitrate_graph_Stream_B(stream_name):
	global stream_B
	global Custom_B
	
	if Custom_B == True:
		file_path = "/UPF_NWDAF/bitrate_graph_custom_B.png"
	else:
		file_path = "/UPF_NWDAF/bitrate_graph_" + stream_B + ".png"
		

	global subprocess_completed
	if subprocess_completed and os.path.exists(file_path):
		return await send_file(file_path, mimetype='image/png')
	elif subprocess_completed and not os.path.exists(file_path):
		return await send_file('/UPF_NWDAF/empty_placeholder.png', mimetype='image/png')
	else:
		return "Please wait until the subprocess completes."


#### Metrics Files ####
        
@app.route('/metrics_A')
async def metrics_A():
	global subprocess_completed
	global stream_A
	global Custom_A

	if Custom_A == True:
		file_path = '/UPF_NWDAF/metrics_custom_A.txt'
	else:
		file_path = "/UPF_NWDAF/metrics_" + stream_A + ".txt"
	
	if subprocess_completed and os.path.exists(file_path):
		response = await send_file(file_path)
		response.headers['Cache-Control'] = 'no-cache, no-store, must-revalidate'
		response.headers['Pragma'] = 'no-cache'
		response.headers['Expires'] = '0'
		return response
	else:
		return "Please wait until the subprocess completes."       

@app.route('/metrics_B')
async def metrics_B():
	global subprocess_completed
	global stream_B
	global Custom_B
	
	if Custom_B == True:
		file_path = '/UPF_NWDAF/metrics_custom_B.txt'
	else:
		file_path = '/UPF_NWDAF/metrics_' + stream_B + '.txt'
	
	if subprocess_completed and os.path.exists(file_path):
		response = await send_file(file_path)
		response.headers['Cache-Control'] = 'no-cache, no-store, must-revalidate'
		response.headers['Pragma'] = 'no-cache'
		response.headers['Expires'] = '0'
		return response
	else:
		return "Please wait until the subprocess completes."       

#### Captures script information ####

@app.route('/captures_subprocess_info')
def captures_info():
	global sub
	global subprocess_instance
	if subprocess_instance is not None and subprocess_instance.poll() is not None:
		return "True"
	else:
		return "False" 

#### Acumulative delay histograms ####

@app.route('/Delay_Histogram_Final_A/<stream_name>')
async def get_Delay_Histogram_Final_A(stream_name):
	global sub
	global stream_A		
	global subprocess_completed
	
	global Custom_A
	
	if Custom_A == True:
		file_path_1 = "Delay_custom_A.txt"
		file_path_2 = "/UPF_NWDAF/delay_histogram_Final_custom_A.png"
	else:
		file_path_1 = "Delay_{}".format(stream_A) + ".txt"
		file_path_2 = "/UPF_NWDAF/delay_histogram_Final_{}.png".format(stream_A)
		
	if subprocess_completed and os.path.exists(file_path_1):
		with open(file_path_1, 'r') as file:
			delay = np.fromstring(file.readline().strip(), sep=',')

		avg_delay = sum(delay) / len(delay)
		std_dev = statistics.stdev(delay)
		max_val = avg_delay + 5 * std_dev
		num_bins = 10
		delay = np.array(delay)
		bins = np.linspace(0, avg_delay + 5*std_dev, num_bins+1)
		delay_hist = plt.figure(figsize=(20, 12))
		
		plt.hist(delay, bins=bins, alpha=0.5, color='blue')
		plt.xticks(bins, [('{:.2f}' if x < 10 else '{:.1f}').format(x) for x in bins], fontsize=16)
		
		plt.yticks(fontsize=16)
		plt.title("Delay histogram for {}".format(stream_A) + " over {} seconds".format(sub.Target_Period), fontsize=20)
		plt.xlabel('Delay (ms)', fontsize=16)
		plt.ylabel('Number of packets', fontsize=16)
				
		delay_hist.savefig(file_path_2)

		plt.clf()  # Clear the current figure
	
		return await send_file(file_path_2, mimetype='image/png')
	else:
		return await send_file('/UPF_NWDAF/empty_placeholder.png', mimetype='image/png')
		
@app.route('/Delay_Histogram_Final_B/<stream_name>')
async def get_Delay_Histogram_Final_B(stream_name):
	global sub
	global stream_B		
	global subprocess_completed
	
	global Custom_B
	
	if Custom_B == True:
		file_path_1 = "Delay_custom_B.txt"
		file_path_2 = "/UPF_NWDAF/delay_histogram_Final_custom_B.png"
	else:
		file_path_1 = "Delay_{}".format(stream_B) + ".txt"
		file_path_2 = "/UPF_NWDAF/delay_histogram_Final_{}.png".format(stream_B)
		
	if subprocess_completed and os.path.exists(file_path_1):
		with open(file_path_1, 'r') as file:
			delay = np.fromstring(file.readline().strip(), sep=',')

		avg_delay = sum(delay) / len(delay)
		std_dev = statistics.stdev(delay)
		#max_val = avg_delay + 5 * std_dev
		num_bins = 10
		delay = np.array(delay)
		bins = np.linspace(0, avg_delay + 5*std_dev, num_bins+1)

		delay_hist = plt.figure(figsize=(20, 12))
		plt.hist(delay, bins=bins, alpha=0.5, color='blue')
		plt.xticks(bins, [('{:.2f}' if x < 10 else '{:.1f}').format(x) for x in bins], fontsize=16)
		plt.yticks(fontsize=16)
		plt.title("Delay histogram for {}".format(stream_B) + " over {} seconds".format(sub.Target_Period), fontsize=20)
		plt.xlabel('Delay (ms)', fontsize=16)
		plt.ylabel('Number of packets', fontsize=16)
				
		delay_hist.savefig(file_path_2)

		plt.clf()  # Clear the current figure
	
		return await send_file(file_path_2, mimetype='image/png')
	else:
		return await send_file('/UPF_NWDAF/empty_placeholder.png', mimetype='image/png')


#### 	Final Metrics 	####

@app.route('/Final_Metrics_A')
async def get_Final_Metrics_A():
	global sub
	global stream_A		
	global subprocess_completed
	
	global Custom_A
	time = sub.Target_Period
	
	### define file_paths ###
	
	if Custom_A == True:
		file_path_delay = "Delay_custom_A.txt"
		file_path_loss = "/UPF_NWDAF/Loss_custom_A.txt"
		file_path_bitrate = "/UPF_NWDAF/previous_bitrate_custom_A.txt"
		file_path_final_metrics = "/UPF_NWDAF/final_metrics_custom_A.txt"
	else:
		file_path_delay = "Delay_{}".format(stream_A) + ".txt"
		file_path_loss = '/UPF_NWDAF/Loss_{}.txt'.format(stream_A)
		file_path_bitrate = '/UPF_NWDAF/previous_bitrate_{}.txt'.format(stream_A)
		file_path_final_metrics = '/UPF_NWDAF/final_metrics_{}.txt'.format(stream_A)
		
	### open delay file ###
		
	if subprocess_completed and os.path.exists(file_path_delay):
		with open(file_path_delay, 'r') as file:
			delay = np.fromstring(file.readline().strip(), sep=',')

		avg_delay = sum(delay) / len(delay)
		std_dev = statistics.stdev(delay)
	else:
		Metrics = "No stream activity for {} during {} s\n".format(stream_A, time)
		with open(file_path_final_metrics, 'w') as f:
			f.write(Metrics)
		response = await send_file(file_path_final_metrics)
		response.headers['Cache-Control'] = 'no-cache, no-store, must-revalidate'
		response.headers['Pragma'] = 'no-cache'
		response.headers['Expires'] = '0'
	
		return response
		 
	### open loss file ###
	if subprocess_completed and os.path.exists(file_path_loss):
		with open(file_path_loss, 'r') as file:
			loss = np.fromstring(file.readline().strip(), sep=',')

		avg_loss = sum(loss) / len(loss)
	
	### open throughput file ###
	
	if subprocess_completed and os.path.exists(file_path_bitrate):
		with open(file_path_bitrate, 'r') as file:
			next(file)
			throughput = np.fromstring(file.readline().strip(), sep=',')
			logging.debug("throughput= %s\n", throughput) 

		avg_throughput = sum(throughput) / len(throughput)
		logging.debug("avg_throughput= %s\n", avg_throughput) 
	
		
	### Create Final Metrics file ###
	

	Metrics = "\tFinal Metrics for {} ({} s): \n \n Packet loss ratio = {:.2f} % \n Average delay = {:.2f} ms \n Standard deviation of delay = {:.2f} ms \n Average throughput = {:.1f} Mbit/s \n".format(stream_A, time, avg_loss, avg_delay, std_dev, avg_throughput)
	
	with open(file_path_final_metrics, 'w') as f:
		f.write(Metrics)
	
	response = await send_file(file_path_final_metrics)
	response.headers['Cache-Control'] = 'no-cache, no-store, must-revalidate'
	response.headers['Pragma'] = 'no-cache'
	response.headers['Expires'] = '0'
	
	return response 
	

@app.route('/Final_Metrics_B')
async def get_Final_Metrics_B():
	global sub
	global stream_B		
	global subprocess_completed
	
	global Custom_B
	time = sub.Target_Period
	### define file_paths ###
	
	if Custom_B == True:
		file_path_delay = "Delay_custom_B.txt"
		file_path_loss = "/UPF_NWDAF/Loss_custom_B.txt"
		file_path_bitrate = "/UPF_NWDAF/previous_bitrate_custom_B.txt"
		file_path_final_metrics = "/UPF_NWDAF/final_metrics_custom_B.txt"
	else:
		file_path_delay = "Delay_{}".format(stream_B) + ".txt"
		file_path_loss = '/UPF_NWDAF/Loss_{}.txt'.format(stream_B)
		file_path_bitrate = '/UPF_NWDAF/previous_bitrate_{}.txt'.format(stream_B)
		file_path_final_metrics = '/UPF_NWDAF/final_metrics_{}.txt'.format(stream_B)
		
	### open delay file ###
		
	if subprocess_completed and os.path.exists(file_path_delay):
		with open(file_path_delay, 'r') as file:
			delay = np.fromstring(file.readline().strip(), sep=',')

		avg_delay = sum(delay) / len(delay)
		std_dev = statistics.stdev(delay)
	else:
		Metrics = "No stream activity for {} during {} s\n".format(stream_B, time)
		with open(file_path_final_metrics, 'w') as f:
			f.write(Metrics)
			
		response = await send_file(file_path_final_metrics)
		response.headers['Cache-Control'] = 'no-cache, no-store, must-revalidate'
		response.headers['Pragma'] = 'no-cache'
		response.headers['Expires'] = '0'
		
		return response
	
	### open loss file ###
	if subprocess_completed and os.path.exists(file_path_loss):
		with open(file_path_loss, 'r') as file:
			loss = np.fromstring(file.readline().strip(), sep=',')

		avg_loss = sum(loss) / len(loss)
	
	### open throughput file ###
	
	if subprocess_completed and os.path.exists(file_path_bitrate):
		with open(file_path_bitrate, 'r') as file:
			next(file)
			throughput = np.fromstring(file.readline().strip(), sep=',')
			logging.debug("throughput= %s\n", throughput) 

		avg_throughput = sum(throughput) / len(throughput)
		logging.debug("avg_throughput= %s\n", avg_throughput) 
	

	### Create Final Metrics file ###
	
	
	Metrics = "\tFinal Metrics for {} ({} s): \n \n Packet loss ratio = {:.2f} % \n Average delay = {:.2f} ms \n Standard deviation of delay = {:.2f} ms \n Average throughput = {:.1f} Mbit/s \n".format(stream_B, time, avg_loss, avg_delay, std_dev, avg_throughput)
	
	with open(file_path_final_metrics, 'w') as f:
		f.write(Metrics)
	
	response = await send_file(file_path_final_metrics)
	response.headers['Cache-Control'] = 'no-cache, no-store, must-revalidate'
	response.headers['Pragma'] = 'no-cache'
	response.headers['Expires'] = '0'
	
	return response 
	
		
#### SERVER  LOOP ####

if __name__ == '__main__':

	config = Config()
	config.bind = [IP_address]  
	config.certfile = certfile_path  # Path to your SSL certificate
	config.keyfile = keyfile_path  # Path to your SSL private key
	config.use_http2 = True  # Enable HTTP/2 support
	loop = asyncio.get_event_loop()
	loop.run_until_complete(serve(app, config))
	
	### Try to catch interrutps
	#signal.signal(signal.SIGINT, handle_keyboard_interrupt)
	
	#loop = asyncio.get_event_loop()
	#try:
	#	loop.run_until_complete(serve(app, config))
	#except KeyboardInterrupt:
	#		handle_keyboard_interrupt()

   


