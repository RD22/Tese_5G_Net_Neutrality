sudo python3 ./core-network.py --type start-basic-vpp  --scenario 1 
sudo docker run -d --volumes-from vpp-upf --volume \
/var/run/docker.sock:/var/run/docker.sock --net \
demo-oai-public-net --ip 192.168.70.140 --cap-add=NET_ADMIN \
--name oai-NWDAF nwdaf
#sudo docker-compose -f docker-compose-gnbsim-vpp.yaml up -d 
#sudo docker-compose -f docker-compose-ueransim-vpp.yaml up -d
sudo docker-compose -f docker-compose-ueransim-vpp.yaml up -d ueransim 
sudo docker-compose -f docker-compose-ueransim-vpp.yaml up -d ueransim2 
sleep 14
sudo docker exec ueransim ip r d default
sudo docker exec ueransim ip r a default via 12.1.1.2
sudo docker exec ueransim2 ip r d default
sudo docker exec ueransim2 ip r a default via 12.1.1.3
sudo docker exec vpp-upf ip r a default via 192.168.70.1
sudo xhost +
#docker exec ueransim /bin/bash -c "\
#  apt-get update >/dev/null 2>&1 && \
#  apt-get install -y libavcodec-dev libavcodec57 >/dev/null 2>&1 && \
#  apt-get install -y libcodec2-dev >/dev/null 2>&1 && \
#  apt-get install -y libopencv-imgcodecs-dev libopencv-imgcodecs3.2 >/dev/null 2>&1 && \
#  firefox -CreateProfile 'ruben /root/.mozilla/firefox/ruben/' >/dev/null 2>&1 && \
#  echo 'user_pref(\"media.eme.enabled\", true);' >> /root/.mozilla/firefox/ruben/prefs.js && \
#  echo 'user_pref(\"media.gmp-widevinecdm.enabled\", true);' >> /root/.mozilla/firefox/ruben/prefs.js && \
#  echo 'user_pref(\"media.gmp-widevinecdm.visible\", true);' >> /root/.mozilla/firefox/ruben/prefs.js && \
#  echo 'user_pref(\"layers.acceleration.enabled\", false);' >> /root/.mozilla/firefox/ruben/prefs.js"


