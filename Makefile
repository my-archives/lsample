CFLAGS= -I/usr/local/include -D_LARGEFILE_SOURCE -D_FILE_OFFSET_BITS=64 -Wall -Werror -fPIC
LIBS=-L/usr/local/lib -llua

all: lsample.so

lsample.o: lsample.c lsample.o
	$(CC) -c $< -o $@ ${CFLAGS}

lsample.so: lsample.o
	$(CC)  -o lsample.so lsample.o ${LIBS} --shared

clean:
	rm -rf *.so *.o
