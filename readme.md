# Protobuf GoLang Demo
## Compile protobuf

```shell
protoc -I=. --go_out=. proto/*
```

## Run main package

```shell
$(cd go/main && go run main.go)
```