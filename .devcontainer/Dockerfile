FROM golang:1.20-rc-bullseye

# Zip
RUN apt update
RUN apt install -y unzip

# Protobuf
RUN curl -Lo protoc.zip "https://github.com/protocolbuffers/protobuf/releases/download/v21.12/protoc-21.12-linux-x86_64.zip"
RUN unzip -q protoc.zip bin/protoc -d /usr/local
RUN chmod a+x /usr/local/bin/protoc
RUN protoc --version

# Protoc-gen-go
RUN curl -Lo protoc-gen-go.tar.gz "https://github.com/protocolbuffers/protobuf-go/releases/download/v1.28.1/protoc-gen-go.v1.28.1.linux.amd64.tar.gz"
RUN tar xf protoc-gen-go.tar.gz
RUN mv protoc-gen-go /usr/local/bin
RUN chmod a+x /usr/local/bin/protoc-gen-go
RUN protoc-gen-go --version

# GOBIN
RUN go env -w GOBIN=/workspaces/protobuf