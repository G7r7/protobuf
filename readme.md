# Protobuf GoLang Demo
## Compile protobuf

```shell
protoc -I=. --go_out=./go --cpp_out=./cpp  proto/*
```

## Run main package

```shell
$(cd go/main && go run main.go)
```

## Run main cpp

```shell
$(mkdir build && cd build && cmake .. && make)
./build/main go/main/message.txt
```