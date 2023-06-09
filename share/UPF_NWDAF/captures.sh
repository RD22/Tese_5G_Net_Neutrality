#!/bin/bash

#### Function to catch keyboard interrupt ####

#touch /captures/n3-2.pcap
#touch /captures/n6-3.pcap
#chmod a+x /captures/n3-2.pcap
#chmod a+x /captures/n6-3.pcap

cleanup ()
{
	kill -s SIGTERM $!
	exit 0
}

trap cleanup SIGINT SIGTERM

#### Processing of arguments and filters ####

echo $1

case $1 in
	"rtp" | "RTP")
		filter_1="udp && ip.dst==12.1.1.2 && ip.src==146.75.90.192"
		proto_1="HTTP/3"
		stream_A=$1
	;;
	"tvi" | "TVI")
		filter_1="ip.dst==12.1.1.2 && tcp && ip.src==195.23.102.0/24"
		proto_1="HTTP/2"
		stream_A=$1
	;;
	"sic" | "SIC")
		filter_1="ip.dst==12.1.1.2 && tcp && ip.src==13.225.244.0/24" 
		proto_1="HTTP/2"
		stream_A=$1
	;;
	"youtube" | "YOUTUBE")
		filter_1="udp && ip.dst==12.1.1.2 && ip.src==195.8.0.0/16" 
		proto_1="HTTP/3"
		stream_A=$1
	;; 
	*)
		ip_src=$(echo "$1" | cut -d' ' -f1)
		ip_dst=$(echo "$1" | cut -d' ' -f3)
		proto_1=$(echo "$1" | cut -d' ' -f5)
		transport_proto=$(echo "$1" | cut -d' ' -f6-)
			
		filter_1="$transport_proto && ip.dst==$ip_dst && ip.src==$ip_src"
		stream_A="custom_A"
esac

case $2 in
	"rtp" | "RTP")
		filter_2="udp && ip.dst==12.1.1.2 && !tcp && ip.src==146.75.90.192"
		proto_2="HTTP/3"
		stream_B="$2"
	;;
	"tvi" | "TVI")
		filter_2="ip.dst==12.1.1.2 && tcp && ip.src==195.23.102.0/24"
		proto_2="HTTP/2"
		stream_B="$2"
	;;
	"sic" | "SIC")
		filter_2="ip.dst==12.1.1.2 && tcp && ip.src==13.225.244.0/24" 
		proto_2="HTTP/2"
		stream_B="$2"
	;;
	"youtube" | "YOUTUBE")
		filter_2="udp && ip.dst==12.1.1.2 && ip.src==195.8.0.0/16" 
		proto_2="HTTP/3"
		stream_B="$2"
	;;
	*)
		
		ip_src=$(echo "$2" | cut -d' ' -f1)
		ip_dst=$(echo "$2" | cut -d' ' -f3)
		proto_2=$(echo "$2" | cut -d' ' -f5)
		transport_proto=$(echo "$2" | cut -d' ' -f6-)	
		filter_2="$transport_proto && ip.dst==$ip_dst && ip.src==$ip_src"
		stream_B="custom_B"
esac

echo -e $filter_2

#### Global variable

export counter=0

#### Main loop ####

capture_loop()
{       

	tshark -C hash -i n6-3 -a duration:5 -w /UPF_NWDAF/captures/n6-3.pcap  & tshark -C hash -i n3-2 -a duration:5 -w /UPF_NWDAF/captures/n3-2.pcap
	
	let counter++
	cur_time=$((counter * 5))

	
	# stream 1
	if [ "$proto_1" = "HTTP/3" ]; then	
		tshark -C hash -r /UPF_NWDAF/captures/n6-3.pcap -Y "$filter_1" -w /UPF_NWDAF/captures/n6-3_$stream_A.pcap  
		tshark -C hash -r /UPF_NWDAF/captures/n3-2.pcap -Y "$filter_1" -w /UPF_NWDAF/captures/n3-2_$stream_A.pcap 	  
		
		tshark -C hash -r /UPF_NWDAF/captures/n6-3_$stream_A.pcap -T fields -e frame.time_epoch -e data.md5_hash -E header=y -E separator=, -E quote=d -E occurrence=f > /UPF_NWDAF/csv/n6-3_$stream_A.csv 2>/dev/null
		
		tshark -C hash -r /UPF_NWDAF/captures/n3-2_$stream_A.pcap -T fields -e frame.time_epoch -e data.md5_hash -E header=y -E separator=, -E quote=d -E occurrence=f > /UPF_NWDAF/csv/n3-2_$stream_A.csv 2>/dev/null
		
	elif [ "$proto_1" = "HTTP/2" ]; then
		tshark -r /UPF_NWDAF/captures/n6-3.pcap -Y "$filter_1" -w /UPF_NWDAF/captures/n6-3_$stream_A.pcap >/dev/null 2>&1 
		tshark -r /UPF_NWDAF/captures/n3-2.pcap -Y "$filter_1" -w /UPF_NWDAF/captures/n3-2_$stream_A.pcap >/dev/null 2>&1	  
				
		tshark -r /UPF_NWDAF/captures/n6-3_$stream_A.pcap -T fields -e frame.time_epoch -e tcp.seq -e ip.src -E header=y -E separator=, -E quote=d -E occurrence=f > /UPF_NWDAF/csv/n6-3_$stream_A.csv 2>/dev/null	
		
		tshark -r /UPF_NWDAF/captures/n3-2_$stream_A.pcap -T fields -e ip.src -E aggregator=" " -E quote=n | awk 'BEGIN {print "ip.src"} {print $2}' > /UPF_NWDAF/n3-2_ip_src_$stream_A.csv 2> /dev/null
		
		tshark -r /UPF_NWDAF/captures/n3-2_$stream_A.pcap -T fields -e frame.time_epoch -e tcp.seq -E header=y -E separator=, -E quote=d -E occurrence=f | paste -d, - /UPF_NWDAF/n3-2_ip_src_$stream_A.csv > /UPF_NWDAF/csv/n3-2_$stream_A.csv
		
	fi
		
	# stream 2	
	if [ "$proto_2" = "HTTP/3" ]; then
		tshark -C hash -r /UPF_NWDAF/captures/n6-3.pcap -Y "$filter_2" -w /UPF_NWDAF/captures/n6-3_$stream_B.pcap >/dev/null 2>&1 
		tshark -C hash -r /UPF_NWDAF/captures/n3-2.pcap -Y "$filter_2" -w /UPF_NWDAF/captures/n3-2_$stream_B.pcap >/dev/null 2>&1	  
	
		tshark -C hash -r /UPF_NWDAF/captures/n6-3_$stream_B.pcap -T fields -e frame.time_epoch -e data.md5_hash -E header=y -E separator=, -E quote=d -E occurrence=f > /UPF_NWDAF/csv/n6-3_$stream_B.csv 2>/dev/null
		
		tshark -C hash -r /UPF_NWDAF/captures/n3-2_$stream_B.pcap -T fields -e frame.time_epoch -e data.md5_hash -E header=y -E separator=, -E quote=d -E occurrence=f > /UPF_NWDAF/csv/n3-2_$stream_B.csv 2>/dev/null
	
	elif [ "$proto_2" = "HTTP/2" ]; then
		tshark -r /UPF_NWDAF/captures/n6-3.pcap -Y "$filter_2" -w /UPF_NWDAF/captures/n6-3_$stream_B.pcap >/dev/null 2>&1 
		tshark -r /UPF_NWDAF/captures/n3-2.pcap -Y "$filter_2" -w /UPF_NWDAF/captures/n3-2_$stream_B.pcap >/dev/null 2>&1	  
	
		tshark -r /UPF_NWDAF/captures/n6-3_$stream_B.pcap -T fields -e frame.time_epoch -e tcp.seq -e ip.src -E header=y -E separator=, -E quote=d -E occurrence=f > /UPF_NWDAF/csv/n6-3_$stream_B.csv 2>/dev/null
		
		tshark -r /UPF_NWDAF/captures/n3-2_$stream_B.pcap -T fields -e ip.src -E aggregator=" " -E quote=n | awk 'BEGIN {print "ip.src"} {print $2}' > /UPF_NWDAF/n3-2_ip_src_$stream_B.csv 2> /dev/null	
		
		tshark -r /UPF_NWDAF/captures/n3-2_$stream_B.pcap -T fields -e frame.time_epoch -e tcp.seq -E header=y -E separator=, -E quote=d -E occurrence=f | paste -d, - /UPF_NWDAF/n3-2_ip_src_$stream_B.csv > /UPF_NWDAF/csv/n3-2_$stream_B.csv
	
	fi
	
	python3 /UPF_NWDAF/calculate_metrics.py "$stream_A" "$stream_B" "$proto_1" "$proto_2" $cur_time
	
}


#### Function to check if loop is needed ####

captures()
{
	if [ "$1" = "no-loop" ]; then
		echo -e "$1"
		capture_loop 
	else	
		counter=1
		start=5
		
		while [ $start -lt $duration ]; do
			capture_loop $counter
			start=$((start + 5))
		done
	fi
}


echo -e "$3"


remove_files() {
	if [[ -f "$1" ]]; then
	    rm "$1"
	fi
}

if [ "$3" = "False"  ]; then
	
	#### Remove previous delay histograms ####

	remove_files "/UPF_NWDAF/images/delay_histogram_$1.png"
	remove_files "/UPF_NWDAF/images/delay_histogram_$2.png"
	remove_files "/UPF_NWDAF/images/delay_histogram_custom_A.png" 
	remove_files "/UPF_NWDAF/images/delay_histogram_custom_B.png"	

	#### Remove Previous bitrate files ####
	
	remove_files "/UPF_NWDAF/temp_files/throughput/previous_bitrate_$1.txt"
	remove_files "/UPF_NWDAF/temp_files/throughput/previous_bitrate_$2.txt" 
	remove_files "/UPF_NWDAF/temp_files/throughput/previous_bitrate_custom_A.txt"	
	remove_files "/UPF_NWDAF/temp_files/throughput/previous_bitrate_custom_B.txt"	

	#### Remove previous bitrate graphs ####

	remove_files "/UPF_NWDAF/images/bitrate_graph_$1.png"
	remove_files "/UPF_NWDAF/images/bitrate_graph_$2.png" 
	remove_files "/UPF_NWDAF/images/bitrate_graph_custom_A.png"	
	remove_files "/UPF_NWDAF/images/bitrate_graph_custom_B.png"	

	####	Remove txt delay files	 ####
	
	remove_files "/UPF_NWDAF/temp_files/delay/Delay_$1.txt"
	remove_files "/UPF_NWDAF/temp_files/delay/Delay_$2.txt"
	remove_files "/UPF_NWDAF/temp_files/delay/Delay_custom_A.txt"	
	remove_files "/UPF_NWDAF/temp_files/delay/Delay_custom_B.txt"
	
	####	Remove txx loss files	 ####
	
	remove_files "/UPF_NWDAF/temp_files/loss/Loss_$1.txt"
	remove_files "/UPF_NWDAF/temp_files/loss/Loss_$2.txt"
	remove_files "/UPF_NWDAF/temp_files/loss/Loss_custom_A.txt"	
	remove_files "/UPF_NWDAF/temp_files/loss/Loss_custom_B.txt"
		
	#### pcap files ####
	
	remove_files "/UPF_NWDAF/captures/n3-2_$1.pcap"
	remove_files "/UPF_NWDAF/captures/n6-3_$1.pcap"
	
	remove_files "/UPF_NWDAF/captures/n3-2_$2.pcap"	
	remove_files "/UPF_NWDAF/captures/n6-3_$2.pcap"
	
	remove_files "/UPF_NWDAF/captures/n3-2_custom_A.pcap"
	remove_files "/UPF_NWDAF/captures/n3-2_custom_B.pcap"
	
	remove_files "/UPF_NWDAF/captures/n6-3_custom_A.pcap"
	remove_files "/UPF_NWDAF/captures/n6-3_custom_B.pcap"

	
	captures "no-loop" 
else
	duration=$4
	echo -e $duration 
	captures "loop"
fi


