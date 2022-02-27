
CFLAGS += -Ipb
CXXFLAGS += -Ipb

all: nwa

nwa: main.o nwa.pb.o pb_common.o pb_decode.o pb_encode.o
	$(CXX) -o nwa main.o nwa.pb.o pb_common.o pb_decode.o pb_encode.o

clean:
	rm nwa *.o

main.o: main.cpp nwa.pb.h pb/pb.h
	$(CXX) $(CXXFLAGS) -c main.cpp

nwa.pb.o: nwa.pb.c nwa.pb.h pb/pb.h
	$(CC) $(CFLAGS) -c nwa.pb.c

pb_common.o: pb/pb_common.c pb/pb_common.h
	$(CC) $(CFLAGS) -c pb/pb_common.c

pb_decode.o: pb/pb_decode.c pb/pb_decode.h pb/pb_common.h
	$(CC) $(CFLAGS) -c pb/pb_decode.c

pb_encode.o: pb/pb_encode.c pb/pb_encode.h pb/pb_common.h
	$(CC) $(CFLAGS) -c pb/pb_encode.c
