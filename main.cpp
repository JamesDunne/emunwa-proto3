
#include <pb_encode.h>
#include <pb_decode.h>
#include <cstdio>
#include "nwa.pb.h"

int main(int argc, char **argv) {
  uint8_t buffer[128];
  size_t message_length;
  bool status;

  // encode:
  {
    Command cmd = Command_init_default;

    pb_ostream_t stream = pb_ostream_from_buffer(buffer, sizeof(buffer));

    cmd.which_request = Command_emulatorInfo_tag;

    status = pb_encode(&stream, Command_fields, &cmd);
    message_length = stream.bytes_written;
  }

  // decode:
  {
    Command cmd = Command_init_zero;

    pb_istream_t stream = pb_istream_from_buffer(buffer, message_length);

    status = pb_decode(&stream, Command_fields, &cmd);
    if (!status) {
      printf("Decoding failed: %s\n", PB_GET_ERROR(&stream));
      return 1;
    }

    switch (cmd.which_request) {
      case Command_emulatorInfo_tag:
        printf("emulatorInfo\n");
        break;
      default:
        printf("unknown\n");
        break;
    }
  }

  return 0;
}
