sudo ip netns add gnB
sudo ip link add veth-gnB type veth peer name veth-OAI 
sudo ip link set veth-gnB netns gnB 
sudo ip netns exec gnB ip addr add 192.168.70.127 dev veth-gnB 
sudo ip netns exec gnB ip link set veth-gnB up 
sudo ip link set veth-OAI master demo-oai 
sudo ip link set veth-OAI up 
sudo ip netns exec gnB ip route add default via 192.168.70.127 dev veth-gnB
sudo ip r a 192.168.70.127 via 192.168.70.129
