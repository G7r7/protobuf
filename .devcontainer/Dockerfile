FROM golang:1.20-rc-bullseye

# Gopls
RUN go install -v golang.org/x/tools/gopls@latest

# Zip
RUN apt update
RUN apt install -y unzip

# Protobuf
RUN apt-get install -y protobuf-compiler
RUN protoc --version

# Protobuf cpp
RUN apt-get install -y libprotobuf-dev

# Make and Cmake
RUN apt-get install -y make cmake

# Protoc-gen-go
RUN curl -Lo protoc-gen-go.tar.gz "https://github.com/protocolbuffers/protobuf-go/releases/download/v1.28.1/protoc-gen-go.v1.28.1.linux.amd64.tar.gz"
RUN tar xf protoc-gen-go.tar.gz
RUN mv protoc-gen-go /usr/local/bin
RUN chmod a+x /usr/local/bin/protoc-gen-go
RUN protoc-gen-go --version