project( PROTOBUF )
cmake_minimum_required( VERSION 3.6 )

find_package(Protobuf REQUIRED)
set(SOURCES 
    cpp/main.cpp
    cpp/proto/utils.pb.cc
    cpp/proto/video_games.pb.cc
)

add_executable(main ${SOURCES})
include_directories(${Protobuf_INCLUDE_DIRS} cpp)
target_link_libraries(main PRIVATE protobuf::libprotobuf)