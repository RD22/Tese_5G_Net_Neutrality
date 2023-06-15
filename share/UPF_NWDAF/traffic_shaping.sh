#!/bin/bash

interface=n3-2
source_ip_byte=48

case $1 in
	"rtp" | "RTP")
		source_ip_address_hex=0x924b5ac0
		mask=0xffffffff
	;;
	"tvi" | "TVI")
		source_ip_address_hex=0xc3176600
		mask=0xffffff00
	;;
	"sic" | "SIC")
		source_ip_address_hex=0x0de1f400 
		mask=0xffffff00
	;;
	"youtube" | "YOUTUBE")
		source_ip_address_hex=0xc3080000
		mask=0xffff0000
	;;
	*)
		# Extract network portion of the IP address
		network=$(echo "$1" | cut -d'/' -f1)
		# Extract subnet mask
		subnet_mask=$(echo "$1" | cut -d'/' -f2)
		subnet_mask_int=$(expr "$subnet_mask" + 0)
		# Convert network address to hexadecimal
		IFS='.' read -r -a octets <<< "$network"
		source_ip_address_hex="0x$(printf "%02X" "${octets[@]}")"
		#mask=0xffffffff
		
		if [ $subnet_mask -eq 32 ]; then
			mask=0xffffffff
		elif [ $subnet_mask -eq 24 ]; then
			mask=0xffffff00
		elif [ $subnet_mask -eq 16 ]; then
			mask=0xffff0000
		fi
esac

# rtp play source_ip_address_hex=0x924b5ac0

# TVI source_ip_address_hex=0xc31766

# SIC source_ip_address_hex=0x0de1f4         

# YOUTUBE source_ip_address_hex=0xc30800  


if [ $# -eq 0 ] || ( [ $2 != "a" ] && [ $2 != "c" ] && [ $2 != "d" ] && [ $2 != "add" ] && [ $2 != "change" ] && [ $2 != "delete" ] );then
	echo -e "\nUsage: ./traffic_shapping.sh STREAM OPTIONS METRICS VALUES"
	echo -e "\nOptions:"
	echo -e "\t a, add\n\t c, change\n\t d, delete"
	echo -e "\nMetrics:"
	echo -e "\t delay\n\t loss\n\t both, delay and loss"
	
fi

add_disc() {
	ERROR=$(tc qdisc add dev $interface root handle 1: prio 2>&1> /dev/null) 
	if [ -n "$ERROR" ]; then
		echo $ERROR
		return -1
	fi
	tc filter add dev $interface parent 1:0 protocol all prio 1 u32 match u32 $source_ip_address_hex $mask at $source_ip_byte flowid 2:1										   	
	return 0
}


add_delay() {
	if [ -n "$4" ]; then
		add_disc
		if [ $? -eq 0 ]; then
			ERROR=$(tc qdisc add dev $interface parent 1:1 handle 2: netem delay $4ms 2>&1> /dev/null)
			if [ -z "$ERROR" ]; then
				echo -e "Added $4 ms of delay/latency"
			fi
		fi
	else
		echo "Invalid latency/delay value"
	fi
}

add_loss() {
	if [ -n "$4" ]; then
		add_disc
		if [ $? -eq 0 ]; then
			ERROR=$(tc qdisc add dev $interface parent 1:1 handle 2: netem loss $4% 2>&1> /dev/null)
			if [ -z "$ERROR" ]; then
				echo -e "Added $4% of loss"
			fi
		fi
	else 
		echo "Invalid loss value"
	fi
}

add_delay_loss() {
	if [ -n "$4" ] && [ -n "$5" ];then
		add_disc
		if [ $? -eq 0 ]; then
			ERROR=$(tc qdisc add dev $interface parent 1:1 handle 2: netem delay $4ms loss $5% 2>&1 > /dev/null)
			if [ -z "$ERROR" ]; then
				echo -e "Added $4 ms of delay/latency and $5% of loss"
			fi				
		fi
	else 
		echo "Invalid values for latency/delay and/or loss"
	fi
}

change_delay() {
	if [ -n "$4" ];then
		ERROR=$(tc qdisc change dev $interface parent 1:1 handle 2: netem delay $4ms 2>&1> /dev/null)	
		if [ -z "$ERROR" ]; then
			echo "Changed delay/latency to $4 ms and deleted loss"	
		else
			echo $ERROR
		fi	
	else
		echo "Invalid latency/delay value"
	fi
}

change_loss() {
	if [ -n "$4" ];then
		ERROR=$(tc qdisc change dev $interface parent 1:1 handle 2: netem loss $4% 2>&1> /dev/null)
		if [ -z "$ERROR" ]; then
			echo "Changed loss to $4% and deleted delay/latency"
		else
			echo $ERROR
		fi
	else
		echo "Invalid loss value"
	fi
}

change_delay_loss() {
	if [ -n "$4" ] && [ -n "$5" ];then
		ERROR=$(tc qdisc change dev $interface parent 1:1 handle 2: netem delay $4ms loss $5% 2>&1> /dev/null)
		if [ -z "$ERROR" ]; then
			echo "Change delay/latency to $4 ms and loss to $5%"
		else
			echo $ERROR
		fi
	else
		echo "Invalid values for latency/delay and/or loss"
	fi
}


case $2 in
	
	"a" | "add")
	if [ "$3" = "delay" ]; then
		add_delay $@
	elif [ "$3" = "loss" ]; then
		add_loss $@							
	elif [ "$3" = "both" ]; then
		add_delay_loss $@	
	else
		echo "Invalid metric"
	fi
	;;
	
	"c" | "change")
	if [ "$3" = "delay" ]; then
		change_delay $@			
	elif [ "$3" = "loss" ]; then
		change_loss $@
	elif [ "$3" =  "both" ]; then
		change_delay_loss $@
	else
		echo "Invalid metric"
	fi
	;;
	
	"d" | "delete")
	tc qdisc d dev $interface root handle 1: prio
	if [ $? -eq 0 ]; then
		echo "Deleted tc disc"
	fi
	;;
esac
	
