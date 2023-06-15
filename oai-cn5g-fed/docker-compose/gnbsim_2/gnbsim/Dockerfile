# Copyright 2021-present Open Networking Foundation
#
# SPDX-License-Identifier: Apache-2.0
#

FROM golang:1.18.0-buster AS gnb

LABEL maintainer="ONF <omec-dev@opennetworking.org>"

RUN apt-get update && apt-get -y install vim ethtool
RUN cd $GOPATH/src && mkdir -p gnbsim
COPY . $GOPATH/src/gnbsim 
RUN cd $GOPATH/src/gnbsim && go build -mod=vendor

FROM ubuntu:20.04 AS gnbsim
RUN apt-get update && apt-get install -y vim strace iproute2 iputils-ping net-tools curl netcat-openbsd  bash tcpdump wireshark xauth firefox

RUN mkdir -p /gnbsim/bin

# Copy executable
COPY --from=gnb /go/src/gnbsim/gnbsim /gnbsim/bin/
WORKDIR /gnbsim/bin
