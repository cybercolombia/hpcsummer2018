# sample makefile
CC = gcc
CXX = g++
CFLAGS = -g -O3 -Wall -std=c99
FLAGS = -g -O3 -Wall
LIBS = -lm

OUTFILE = exe
MAINFILE = matrix.c
OBJS = arrays.o timer.o randn.o
SRCS = arrays.c timer.c randn.c

$(OUTFILE): $(OBJS)
	$(CC) $(CFLAGS) $(MAINFILE) -o $(OUTFILE) $(OBJS) $(LIBS)
$(OBJS): $(SRCS) defs.h
	$(CC) $(CFLAGS) -c $(SRCS) $(LIBS)

clean:
	rm -rf *.o $(OUTFILE) $(OUTFILE).dSYM