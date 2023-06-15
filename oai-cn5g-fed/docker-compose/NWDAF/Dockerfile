FROM ubuntu:20.04
ENV DEBIAN_FRONTEND=noninteractive
RUN apt-get update && apt-get install -y \
	iproute2 \
	iputils-ping \
	curl \
	scapy \
	wireshark \
	pip \
	ca-certificates \
	gnupg \	
	&& pip install flask quart \
	&& pip3 install matplotlib \
	&& install -m 0755 -d /etc/apt/keyrings \
	&& curl -fsSL https://download.docker.com/linux/ubuntu/gpg | gpg --dearmor -o /etc/apt/keyrings/docker.gpg \
	&& chmod a+r /etc/apt/keyrings/docker.gpg \
	&& echo "deb [arch="$(dpkg --print-architecture)" signed-by=/etc/apt/keyrings/docker.gpg] \
	https://download.docker.com/linux/ubuntu "$(. /etc/os-release && echo "$VERSION_CODENAME")" \ 
	stable" | tee /etc/apt/sources.list.d/docker.list > /dev/null \ 
	&& apt-get update \
	&& apt-get install -y docker-ce docker-ce-cli containerd.io docker-buildx-plugin docker-compose-plugin
COPY sleep.sh /root/sleep.sh
CMD /root/sleep.sh
WORKDIR /UPF_NWDAF
