FROM ubuntu:latest
RUN apt-get update && apt-get install -y wget 
RUN wget https://github.com/CE-Programming/toolchain/releases/download/nightly/CEdev-Linux-nightly.tar.gz -O /tmp/CEdev-Linux-nightly
RUN chmod +x /tmp/CEdev-Linux-nightly && /tmp/CEdev-Linux-nightly
