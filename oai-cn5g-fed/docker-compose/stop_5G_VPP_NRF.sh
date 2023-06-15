sudo docker-compose -f docker-compose-ueransim-vpp.yaml down
sudo docker kill oai-NWDAF
sudo docker rm oai-NWDAF
sudo python3 ./core-network.py --type stop-basic-vpp  --scenario 1 --capture /tmp/oai/vpp-upf-gnbsim/vpp-upf-gnbsim.pcap
