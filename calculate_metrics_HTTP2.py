import numpy as np
import pandas as pd
import matplotlib.pyplot as plt
import statistics

n6_3_tCAP = pd.read_csv("/UPF_NWDAF/n6-3_tCAP.csv")
n3_2_tCAP = pd.read_csv("/UPF_NWDAF/n3-2_tCAP.csv")

n6_3_bCAP = pd.read_csv("/UPF_NWDAF/n6-3_bCAP.csv")
n3_2_bCAP = pd.read_csv("/UPF_NWDAF/n3-2_bCAP.csv")

def calculate_metrics(n6,n3,stream):
	
	if (len(n6) == 0 ):
		print("No Video Stream activity! \n")
		if (stream == "SIC") :
			Metrics_A = "\t \t {}: - No Video Stream activity! \n ".format(stream)
			return Metrics_A
		elif (stream == "TVI") :
			Metrics_B = "\t \t {}: - No Video Stream activity! \n ".format(stream)
			return Metrics_B
			 			
	elif (len(n3) == 0 ): 
		print("100 % loss !\n")
		if (stream == "SIC") :
			Metrics_A = "\t \t {}: - 100 % loss ! \n ".format(stream)
			return Metrics_A
		elif (stream == "TVI") :
			Metrics_B = "\t \t {}: - 100 % loss ! \n ".format(stream)
			return Metrics_B 
	else:
		timestamps_n6 = n6[n6.columns[0]]
		timestamps_n3 = n3[n3.columns[0]]
			
		# Identify and remove duplicates in n3 and n6
		#n3_seq = n3.drop_duplicates(subset=n3.columns[1])
		#n6_seq = n6.drop_duplicates(subset=n6.columns[1])
		
		n3_seq = n3.drop_duplicates(subset=n3.columns[1],keep='last')
		n6_seq = n6.drop_duplicates(subset=n6.columns[1],keep='last')
		
		sorted_n3_seq = n3_seq.sort_values(by=n3_seq.columns[1])
		sorted_n6_seq = n6_seq.sort_values(by=n6_seq.columns[1])
		
		mask = sorted_n6_seq[sorted_n6_seq.iloc[:,1].isin(sorted_n3_seq.iloc[:,1])]
		
		matched_Seq_Num = len(mask)
		
		timepackets_n3 = sorted_n3_seq[sorted_n3_seq.iloc[:, 1].isin(mask.iloc[:, 1])].iloc[:, 0].tolist()
		timepackets_n6 = sorted_n6_seq[sorted_n6_seq.iloc[:, 1].isin(mask.iloc[:, 1])].iloc[:, 0].tolist()

		delay = [(t_n3 - t_n6) * 1000 for t_n3, t_n6 in zip(timepackets_n3, timepackets_n6)]
		
		for i in range(len(delay)):
			if delay[i] < 0:
				delay[i] = - delay[i]
		#for i in range(len(delay)):
		#	if delay[i] > 1:
		#		print(i)	
		#		print(delay[i])
		
		print("matched Sequence numbers: {}".format(matched_Seq_Num))
				
		loss = (1 - (matched_Seq_Num / len(timestamps_n6))) * 100
		avg_delay = sum(delay) / len(delay)
		std_dev = statistics.stdev(delay)
			
		print(f" Statistics/ metrics for {stream}!")
		print(f"{loss:.2f} %")
		print(f"{avg_delay:.2f} ms")
		print(f"Standard deviation of the delay: {std_dev:.2f} ms\n")
		
		delay = np.array(delay)
			
		max_val = avg_delay + 5 * std_dev
		delay_clipped = np.clip(delay, None, max_val)
		delay_clipped[delay > max_val] = max_val+1
		
		num_bins = 22
		bins = np.linspace(avg_delay - 5*std_dev, avg_delay + 5*std_dev, num_bins+1)
		plt.figure(figsize=(20, 12))
		plt.hist(delay_clipped, bins=bins, alpha = 0.5, color='blue')
		
		plt.xticks(bins, [f'{tick:.2f}' if tick != max(bins) else '>{:.2f}'.format(max_val) for tick in bins],fontsize=12)
		plt.yticks(fontsize=12)
		# set the xticks for all the bins
		#plt.xticks(bins)
		#plt.xticks(bins, ['{:.2f}'.format(b) for b in bins])
		#xtick_labels[-1] = "1000"
		#last_bin_xtick_label = plt.gca().get_xticklabels()[-2]
		#last_bin_xtick_label.set_text("1000")
		# get the xtick label for the last bin and set it to the desired value
		#last_bin_xtick_label = plt.gca().get_xticklabels()[1]
		#last_bin_xtick_label.set_text("10")			
		
		plt.title("Delay distribution for {}".format(stream),fontsize=20)
		plt.xlabel('Delay (ms)',fontsize=14)
		plt.ylabel('Number of packets',fontsize=14)

		if (stream == "SIC") :
			Metrics_A = "\t \t {}: \n \n Packet loss = {:.2f} % \n Average delay = {:.2f} ms \n Standard deviation of delay = {:.2f} ms \n ".format(stream, loss, avg_delay, std_dev)
			plt.savefig("/UPF_NWDAF/delay_histogram_bCAP_HTTP2.png")
			plt.clf()
			return Metrics_A
		elif (stream == "TVI") :
			Metrics_B = "\t \t {}: \n \n Packet loss = {:.2f} % \n Average delay = {:.2f} ms \n Standard deviation of delay = {:.2f} ms \n ".format(stream, loss, avg_delay, std_dev)
			plt.savefig("/UPF_NWDAF/delay_histogram_tCAP_HTTP2.png")
			plt.clf()
			return Metrics_B

Metrics_bCAP = calculate_metrics(n6_3_bCAP,n3_2_bCAP,"SIC")
Metrics_tCAP = calculate_metrics(n6_3_tCAP,n3_2_tCAP,"TVI")
Metrics = Metrics_bCAP + "\n" + Metrics_tCAP

with open('/UPF_NWDAF/metrics_HTTP2.txt', 'w') as f:
	f.write(Metrics)
	
