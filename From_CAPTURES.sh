#if [ "$3" = "False"  ]; then
#	capture_loop $proto_1 $proto_2 $filter_1 $filter_2 
#else
#	capture_loop $proto_1 $proto_2 $filter_1 $filter_2 
#fi

#while true
#do
		
	#tshark -i n6-3 -c 20 -w n6-3.pcap  & tshark -i n3-2 -c 20 -w n3-2.pcap
	
	####	TVI	####
	
#	tshark -r /UPF_NWDAF/n6-3.pcap -Y "ip.dst==12.1.1.2 && ip.src==195.23.102.0/24" -w /UPF_NWDAF/n6-3_tCAP_DL.pcap >/dev/null 2>&1 
#	tshark -r /UPF_NWDAF/n3-2.pcap -Y "ip.dst==12.1.1.2 && ip.src==195.23.102.0/24" -w /UPF_NWDAF/n3-2_tCAP_DL.pcap >/dev/null 2>&1	  
	
#	tshark -r /UPF_NWDAF/n6-3_tCAP_DL.pcap -T fields -e frame.time_epoch -e tcp.seq -E header=y -E separator=, -E quote=d -E occurrence=f > /UPF_NWDAF/n6-3_tCAP.csv 2>/dev/null
#	tshark -r /UPF_NWDAF/n3-2_tCAP_DL.pcap -T fields -e frame.time_epoch -e tcp.seq -E header=y -E separator=, -E quote=d -E occurrence=f > /UPF_NWDAF/n3-2_tCAP.csv 2>/dev/null
	
	###	SIC	####
	
#	tshark -r /UPF_NWDAF/n6-3.pcap -Y "ip.dst==12.1.1.2 && tcp && ip.src==13.225.244.0/24" -w /UPF_NWDAF/n6-3_bCAP_DL.pcap >/dev/null 2>&1	 
#	tshark -r /UPF_NWDAF/n3-2.pcap -Y "ip.dst==12.1.1.2 && tcp && ip.src==13.225.244.0/24" -w /UPF_NWDAF/n3-2_bCAP_DL.pcap >/dev/null 2>&1	  
	
#	tshark -r /UPF_NWDAF/n6-3_bCAP_DL.pcap -T fields -e frame.time_epoch -e tcp.seq -E header=y -E separator=, -E quote=d -E occurrence=f > /UPF_NWDAF/n6-3_bCAP.csv	2>/dev/null
#	tshark -r /UPF_NWDAF/n3-2_bCAP_DL.pcap -T fields -e frame.time_epoch -e tcp.seq -E header=y -E separator=, -E quote=d -E occurrence=f > /UPF_NWDAF/n3-2_bCAP.csv  2>/dev/null
	
	
#	python3 /UPF_NWDAF/calculate_metrics_HTTP2.py
	

	
#done 

# twitch -> 52.223.197.82
# twitch -> 146.75.90.167   


# SIC -> ip.dst==12.1.1.2 && tcp && ip.src==13.225.244.0/24
# SIC -> 141.193.213.20 || 141.193.213.21

# TVI -> ip.dst==12.1.1.2 && tcp && ip.src==195.23.102.0/24
