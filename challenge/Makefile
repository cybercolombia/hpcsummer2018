# sample makefile
CC = gcc
CXX = g++
CFLAGS = -g -O3 -Wall -std=c99
FLAGS = -g -O3 -Wall


OUTFILE = exe
MAINFILE = matrix.c
OBJS = arrays.o timer.o
SRCS = arrays.c timer.c

$(OUTFILE): $(OBJS)
	$(CC) $(CFLAGS) $(MAINFILE) -o $(OUTFILE) $(OBJS)
$(OBJS): $(SRCS) defs.h
	$(CC) $(CFLAGS) -c $(SRCS)

clean:
	rm -rf *.o $(OUTFILE)