import sys
import numpy as np
import pandas as pd
import matplotlib.pyplot as plt
import statistics

n6_3_tCAP = pd.read_csv("n6-3_tCAP.csv")
n3_2_tCAP = pd.read_csv("n3-2_tCAP.csv")

n6_3_bCAP = pd.read_csv("n6-3_bCAP.csv")
n3_2_bCAP = pd.read_csv("n3-2_bCAP.csv")


# Access command-line arguments
arguments = sys.argv

# Subsequent elements are the command-line arguments
stream_A = arguments[1]
stream_B = arguments[2]


def calculate_metrics(n6,n3,stream):
	
	if (len(n6) == 0):
		print("No Video Stream activity! \n")
		if (stream == "YOUTUBE") :
			Metrics_A = "\t \t {}: - No Video Stream activity! \n ".format(stream)
			return Metrics_A
		elif (stream == "RTP PLAY") :
			Metrics_B = "\t \t {}: - No Video Stream activity! \n ".format(stream)
			return Metrics_B
			 			
	elif (len(n3) == 0 ): 
		print("100 % loss !\n")
		if (stream == "YOUTUBE") :
			Metrics_A = "\t \t {}: - 100 % loss ! \n ".format(stream)
			return Metrics_A
		elif (stream == "RTP PLAY") :
			Metrics_B = "\t \t {}: - 100 % loss ! \n ".format(stream)
			return Metrics_B 
	else:
		timestamps_n6 = n6[n6.columns[0]]
		timestamps_n3 = n3[n3.columns[0]]

		#Boolean mask which is True for each hash in n6 that is in n3, and False otherwise. The isin method is used twice to find the timestamps of the matching hashes. tolist is used to 			convert the resulting pandas Series objects to lists.
		
		#    isin() is a pandas Series method that returns a boolean Series indicating whether each element of the original Series is contained in the argument to isin(). In this case, we 			pass the n3_2[n3_2.columns[1]] Series as the argument, so mask will be a boolean Series with the same length as n6_3[n6_3.columns[1]], where each element is True if the corresponding 			element in n6_3[n6_3.columns[1]] is also present in n3_2[n3_2.columns[1]], and False otherwise. The resulting mask boolean Series can then be used to select the rows of n6_3 that have 		matching hashes, by passing it as an index to the DataFrame. For example, n6_3[mask] would return a new DataFrame containing only the rows of n6_3 with matching hashes.		
		
		mask = n6[n6.columns[1]].isin(n3[n3.columns[1]])
		
		matched_hashes = mask.sum()

		timepackets_n6 = timestamps_n6[mask].tolist()
		timepackets_n3 = timestamps_n3[n3[n3.columns[1]].isin(n6[n6.columns[1]])].tolist()
		
		#The zip() function is used to create an iterator that aggregates the corresponding elements from timepackets_n3 and timepackets_n6 into tuples. For example, zip([1, 2, 3], [4, 5, 6]) 		would produce the iterator [(1, 4), (2, 5), (3, 6)]. The list comprehension then iterates over this iterator, taking each pair of timestamps as a tuple (t_n3, t_n6). For each tuple, 			the expression (t_n3 - t_n6) * 1000 is evaluated to compute the delay in milliseconds.
		
		delay = [(t_n3 - t_n6) * 1000 for t_n3, t_n6 in zip(timepackets_n3, timepackets_n6)]
		loss = (1 - (matched_hashes / len(timestamps_n6))) * 100
		avg_delay = sum(delay) / len(timepackets_n6)
		std_dev = statistics.stdev(delay)

		#print(len(n6))
		#print(len(n3))
		#print(f"matched hashes: {matched_hashes}")
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

		if (stream == "YOUTUBE") :
			Metrics_A = "\t \t {}: \n \n Packet loss = {:.2f} % \n Average delay = {:.2f} ms \n Standard deviation of delay = {:.2f} ms \n ".format(stream, loss, avg_delay, std_dev)
			plt.savefig("delay_histogram_bCAP.png")
			plt.clf()
			return Metrics_A
		elif (stream == "RTP PLAY") :
			Metrics_B = "\t \t {}: \n \n Packet loss = {:.2f} % \n Average delay = {:.2f} ms \n Standard deviation of delay = {:.2f} ms \n ".format(stream, loss, avg_delay, std_dev)
			plt.savefig("delay_histogram_tCAP.png")
			plt.clf()
			return Metrics_B

Metrics_bCAP = calculate_metrics(n6_3_bCAP,n3_2_bCAP,"YOUTUBE")
Metrics_tCAP = calculate_metrics(n6_3_tCAP,n3_2_tCAP,"RTP PLAY")
Metrics = Metrics_bCAP + "\n" + Metrics_tCAP

with open('metrics.txt', 'w') as f:
	f.write(Metrics)
	
