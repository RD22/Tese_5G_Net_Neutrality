import sys
import numpy as np
import pandas as pd
import matplotlib.pyplot as plt
import statistics
import subprocess
import os

# Access command-line arguments
arguments = sys.argv

# Subsequent elements are the command-line arguments

#### Stream A ####

stream_A = arguments[1]
print(stream_A)

csv_file_path = "/UPF_NWDAF/csv/n6-3_" + stream_A + ".csv"
n6_3_Stream_A = pd.read_csv(csv_file_path)

csv_file_path = "/UPF_NWDAF/csv/n3-2_" + stream_A + ".csv"
n3_2_Stream_A = pd.read_csv(csv_file_path)


#### Stream B ####

stream_B = arguments[2]
print(stream_B)

csv_file_path = "/UPF_NWDAF/csv/n6-3_" + stream_B + ".csv"
n6_3_Stream_B = pd.read_csv(csv_file_path)

csv_file_path = "/UPF_NWDAF/csv/n3-2_" + stream_B + ".csv"
n3_2_Stream_B = pd.read_csv(csv_file_path)

#### Other arguments ####

proto_A = arguments[3]
proto_B = arguments[4]

cur_time = int(arguments[5])


def bitrate_graphs(bitrate,stream):
	# Load previous bitrate values from file, if needed #
		
	previous_bitrate_file = "/UPF_NWDAF/temp_files/throughput/previous_bitrate_{}.txt".format(stream)
		
	try:
		with open(previous_bitrate_file, 'r') as file:
			prev_time = np.fromstring(file.readline().strip(), sep=',')
			prev_bitrate = np.fromstring(file.readline().strip(), sep=',')
	except FileNotFoundError:
		prev_time = np.array([])
		prev_bitrate = np.array([])
		
	current_time = np.linspace(cur_time-4 , cur_time, 5)
	current_bitrate = np.full(len(current_time), bitrate)
	
	time = np.concatenate((prev_time, current_time))
	br = np.concatenate((prev_bitrate, current_bitrate))
	
	with open(previous_bitrate_file, 'w') as file:
			file.write(','.join(map(str, time)) + '\n')
			file.write(','.join(map(str, br)) + '\n')

	# Create the Bitrate_graph figure
	
	Bitrate_graph = plt.figure(figsize=(20, 12))
	plt.xlabel('Time (s)', fontsize=20)
	plt.ylabel('Throughput (Mbit/s)', fontsize=20)
	plt.yticks(fontsize=20)
	plt.xticks(fontsize=20)
	plt.title('Bitrate over Time for {}'.format(stream),fontsize=24)
	
	# Plot the bitrate on the Bitrate_graph figure
	
	plt.plot(time, br)
	
	# Save the graph #
	file_path_bitrate = "/UPF_NWDAF/images/bitrate_graph_{}.png".format(stream)
	Bitrate_graph.savefig(file_path_bitrate)

#### acumulate loss values ####
	
def accumulate_loss(loss,stream):
	loss = np.array([loss])
	
	file_path = '/UPF_NWDAF/temp_files/loss/Loss_{}.txt'.format(stream)
	try:
		with open(file_path, 'r') as file:
			prev_loss = np.fromstring(file.readline().strip(), sep=',')
	except FileNotFoundError:
		prev_loss = np.array([])
	
	current_loss = np.concatenate((prev_loss, loss))
	
	with open(file_path, 'w') as file_loss:
		file_loss.write(','.join(map(str, current_loss)))
		

def calculate_metrics(n6,n3,stream,proto):
	
	#### Check if no Stream Activity ####
	
	if (len(n6) < 5):
		print("No Video Stream activity for {}!  \n".format(stream))
		if (stream == stream_A) :
			file_path = "/UPF_NWDAF/images/delay_histogram_{}.png".format(stream)
			if os.path.exists(file_path):
				command = ['rm', '/UPF_NWDAF/images/delay_histogram_{}.png'.format(stream)]
				subprocess.run(command)
			Metrics_A = "\t {}: - No Video Stream activity! \n ".format(stream)
			bitrate=0
			bitrate_graphs(bitrate,stream)
			loss = 0
			accumulate_loss(loss,stream)
			return Metrics_A
		elif (stream == stream_B) :
			file_path = "/UPF_NWDAF/images/delay_histogram_{}.png".format(stream)
			if os.path.exists(file_path):
				command = ['rm', '/UPF_NWDAF/images/delay_histogram_{}.png'.format(stream)]
				subprocess.run(command)
			Metrics_B = "\t {}: - No Video Stream activity! \n ".format(stream)
			bitrate=0
			bitrate_graphs(bitrate,stream)
			loss = 0
			accumulate_loss(loss,stream)
			return Metrics_B
	
	#### Check if no packets arrived (100% LOSS) ####
	
	elif (len(n3) == 0 ): 
		print("100 % loss !\n")
		if (stream == stream_A) :
			file_path = "/UPF_NWDAF/images/delay_histogram_{}.png".format(stream)
			if os.path.exists(file_path):
				command = ['rm', '/UPF_NWDAF/images/delay_histogram_{}.png'.format(stream)]
				subprocess.run(command)
			Metrics_A = "\t {}: - 100 % loss ! \n ".format(stream)
			bitrate=0
			bitrate_graphs(bitrate,stream)
			loss = 100
			accumulate_loss(loss,stream)
			return Metrics_A
		elif (stream == stream_B) :
			file_path = "/UPF_NWDAF/images/delay_histogram_{}.png".format(stream)
			if os.path.exists(file_path):
				command = ['rm', '/UPF_NWDAF/images/delay_histogram_{}.png'.format(stream)]
				subprocess.run(command)
			Metrics_B = "\t {}: - 100 % loss ! \n ".format(stream)
			bitrate=0
			bitrate_graphs(bitrate,stream)
			loss = 100
			accumulate_loss(loss,stream)
			return Metrics_B 
	else:
	
		#### Calculate Delay, Loss and Standard deviation ####
	
		timestamps_n6 = n6[n6.columns[0]]
		timestamps_n3 = n3[n3.columns[0]]
		
		if (proto =="HTTP/3") :
			mask = n6[n6.columns[1]].isin(n3[n3.columns[1]])
			matched_packets = mask.sum()
			timepackets_n6 = timestamps_n6[mask].tolist()
			timepackets_n3 = timestamps_n3[n3[n3.columns[1]].isin(n6[n6.columns[1]])].tolist()
			
			print("Matched packets = {} \n".format(matched_packets))
			print("Lenght of timestamps_n6 = {} \n".format(len(timestamps_n6)))
			print("Lenght of timepackets_n3 = {} \n".format(len(timepackets_n3)))
		
		elif (proto == "HTTP/2"):
			
			src_ip_n6 = n6[n6.columns[2]]
			src_ip_n3 = n3[n3.columns[2]]

			n3_seq = n3.drop_duplicates(subset=[n3.columns[1], n3.columns[2]], keep='last')
			n6_seq = n6.drop_duplicates(subset=[n6.columns[1], n6.columns[2]], keep='last')
			sorted_n3_seq = n3_seq.sort_values(by=n3_seq.columns[1])

			sorted_n6_seq = n6_seq.sort_values(by=n6_seq.columns[1])

			mask = sorted_n6_seq[sorted_n6_seq.iloc[:,1].isin(sorted_n3_seq.iloc[:,1])]

			matched_packets = len(mask)

			timepackets_n3 = sorted_n3_seq[sorted_n3_seq.iloc[:, 1].isin(mask.iloc[:, 1])].iloc[:, 0].tolist()
	
			timepackets_n6 = sorted_n6_seq[sorted_n6_seq.iloc[:, 1].isin(mask.iloc[:, 1])].iloc[:, 0].tolist()

			print("Matched packets = {} \n".format(matched_packets))
			print("Lenght of timestamps_n6 = {} \n".format(len(timestamps_n6)))
			print("Lenght of timepackets_n3 = {} \n".format(len(timepackets_n3)))
		
			
			"""# Identify and remove duplicates in n3 and n6
			n3_seq = n3.drop_duplicates(subset=n3.columns[1],keep='last')
			n6_seq = n6.drop_duplicates(subset=n6.columns[1],keep='last')
			
			sorted_n3_seq = n3_seq.sort_values(by=n3_seq.columns[1])
			sorted_n6_seq = n6_seq.sort_values(by=n6_seq.columns[1])
			mask = sorted_n6_seq[sorted_n6_seq.iloc[:,1].isin(sorted_n3_seq.iloc[:,1])]
			matched_packets = len(mask)			
			timepackets_n3 = sorted_n3_seq[sorted_n3_seq.iloc[:, 1].isin(mask.iloc[:, 1])].iloc[:, 0].tolist()
			timepackets_n6 = sorted_n6_seq[sorted_n6_seq.iloc[:, 1].isin(mask.iloc[:, 1])].iloc[:, 0].tolist()
			
			print("Matched packets = {} \n".format(matched_packets))
			print("Lenght of n6_sorted = {} \n".format(len(sorted_n6_seq)))
			print("Lenght of n3_sorted = {} \n".format(len(sorted_n3_seq)))"""
		

		
		#### calculate delay ####								
		delay = [(t_n3 - t_n6) * 1000 for t_n3, t_n6 in zip(timepackets_n3, timepackets_n6)]
		
		#### acumulate delay values ####
		
		file_path = '/UPF_NWDAF/temp_files/delay/Delay_{}.txt'.format(stream)
		try:
			with open(file_path, 'r') as file:
				prev_delay = np.fromstring(file.readline().strip(), sep=',')
		except FileNotFoundError:
			prev_delay = np.array([])
		
		current_delay = np.concatenate((prev_delay, delay))
		
		with open(file_path, 'w') as file_delay:
			file_delay.write(','.join(map(str, current_delay)))
			
		#### Calculate Loss, avg_delay and std_dev of delay #####
		
		loss = (1 - (matched_packets / len(timestamps_n6))) * 100
		avg_delay = sum(delay) / len(delay)
		std_dev = statistics.stdev(delay)
		
		accumulate_loss(loss,stream)		
		
		#### Calculate troughput / bitrate ####
		
		command = "capinfos -u /UPF_NWDAF/captures/n3-2_{}".format(stream) + ".pcap" + " | awk '{print $3}' | tail -n 1"
		result = subprocess.run(command, shell=True, stdout=subprocess.PIPE, stderr=subprocess.PIPE, universal_newlines=True)
		
		if (result.returncode == 0) :
			output = result.stdout.strip().split()	
			if len(output) == 1:
				capture_duration = float(output[0])
		
		packet_rate = matched_packets / capture_duration
		
		command = "capinfos -z /UPF_NWDAF/captures/n3-2_{}".format(stream) + ".pcap" + "| awk '{print $4}' "
		result = subprocess.run(command, shell=True, stdout=subprocess.PIPE, stderr=subprocess.PIPE, universal_newlines=True)
		
		if (result.returncode == 0) :
			output = result.stdout.strip().split()	
			if len(output) == 1:
				packet_size = float(output[0]) * 8
				
		bitrate = (packet_rate * packet_size) / 1000000
		
	
		
		#### Histograms / Graphs ####
		
		#### Delay Histogram ####
		
		delay = np.array(delay)
		
		num_bins = 22
		bins = np.linspace(0, avg_delay + 5*std_dev, num_bins+1)
		delay_hist = plt.figure(figsize=(20, 12))
		plt.hist(delay, bins=bins, alpha=0.5, color='blue')
		plt.xticks(bins, ['{:.2f}'.format(x) for x in bins], fontsize=16)
		plt.yticks(fontsize=16)
		plt.title("Delay distribution for {} ({} -> {}) s".format(stream, cur_time-4 ,cur_time), fontsize=20)
		plt.xlabel('Delay (ms)', fontsize=16)
		plt.ylabel('Number of packets', fontsize=16)
	
			#### Save histogram ####
		file_path_delay = "/UPF_NWDAF/images/delay_histogram_{}.png".format(stream)
		delay_hist.savefig(file_path_delay)

		#### Bitrate Graphs ####
		
		bitrate_graphs(bitrate,stream)
		
		plt.clf()  # Clear the current figures
		

		##### Return Stream metrics ####
		
		if stream == stream_A:
		    Metrics_A = "\tMetrics for {} ({} -> {}): \n \n Packet loss = {:.2f} % \n Average delay = {:.2f} ms \n Standard deviation of delay = {:.2f} ms \n Throughput = {:.1f} Mbit/s \n".format(stream_A, cur_time-4, cur_time, loss, avg_delay, std_dev, bitrate)
		    return Metrics_A
		elif stream == stream_B:
		    Metrics_B = "\tMetrics for {} ({} -> {}): \n \n Packet loss = {:.2f} % \n Average delay = {:.2f} ms \n Standard deviation of delay = {:.2f} ms \n Throughput = {:.1f} Mbit/s \n".format(stream_B, cur_time-4, cur_time, loss, avg_delay, std_dev, bitrate)
		    return Metrics_B

#### Call function for Stream_A and for Stream_B

Metrics_A = calculate_metrics(n6_3_Stream_A, n3_2_Stream_A, stream_A, proto_A)
Metrics_B = calculate_metrics(n6_3_Stream_B, n3_2_Stream_B, stream_B, proto_B)

#### Write to Metric files ####
with open('/UPF_NWDAF/temp_files/metrics/metrics_' + stream_A + '.txt', 'w') as f:
	f.write(Metrics_A)
with open('/UPF_NWDAF/temp_files/metrics/metrics_' + stream_B + '.txt', 'w') as f:
	f.write(Metrics_B)
	
