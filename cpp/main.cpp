#include <iostream>
#include <fstream>
#include <string>
#include "proto/video_games.pb.h"

// Main function:  Reads the entire address book from a file and prints all
//   the information inside.
int main(int argc, char* argv[]) {
  // Verify that the version of the library that we linked against is
  // compatible with the version of the headers we compiled against.
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  if (argc != 2) {
    std::cerr << "Usage:  " << argv[0] << " MESSAGE_FILE" << std::endl;
    return -1;
  }

  video_games::Library library;

  {
    // Read the existing address book.
    std::fstream input(argv[1], std::ios::in | std::ios::binary);
    if (!library.ParseFromIstream(&input)) {
      std::cerr << "Failed to parse message v1." << std::endl;
      return -1;
    }
  }

  std::cout << "V1:" << std::endl;
  std::cout << library.DebugString() << std::endl;

  // Optional:  Delete all global objects allocated by libprotobuf.
  google::protobuf::ShutdownProtobufLibrary();

  return 0;
}