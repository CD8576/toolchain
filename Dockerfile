FROM ubuntu:latest
RUN apt-get update && apt-get install -y wget 
RUN wget https://github.com/CE-Programming/toolchain/releases/download/nightly/CEdev-Linux-nightly.tar.gz -O /cmp/CEdev-Linux-nightly.tar.gz
RUN tar -xzf /cmp/my_archive.tar.gz -C /opt/my_archive.tar
WORKDIR /opt/
RUN chmod +x /opt/CEdev-Linux-nightly.tar && /opt/CEdev-Linux-nightly.tar

