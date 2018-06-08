## Useful functions and declarations
CHDIR_SHELL := $(SHELL)
define chdir
   $(eval _D=$(firstword $(1) $(@D)))
   $(info $(MAKE): cd $(_D)) $(eval SHELL = cd $(_D); $(CHDIR_SHELL))
endef

# sample makefile
CC = gcc
CXX = g++
CFLAGS = -g -O3 -Wall -std=c99
FLAGS = -g -O3 -Wall
LIBS = -lm

OUTFILE = exe
MAINFILE = main.c
OBJS = matrix.o arrays.o timer.o randn.o
SRCS = matrix.c arrays.c timer.c randn.c

all: $(OUTFILE) python clean
$(OUTFILE): $(OBJS)
	echo "	Compiling the C main **************************"
	$(CC) $(CFLAGS) $(MAINFILE) -o $(OUTFILE) $(OBJS) $(LIBS)
$(OBJS): $(SRCS) defs.h
	$(CC) $(CFLAGS) -c $(SRCS) $(LIBS)

python: python/pymatrix.so clean
python/pymatrix.so:
	echo "	Trying to set up the Python module ************"
	$(MAKE) -C python --always-make
cleanall: clean
	rm -rf $(OUTFILE)
	### Clean python folder
	rm -rf python/*.so
clean:
	rm -rf *.o $(OUTFILE).dSYM
	### Clean python folder
	rm -rf python/build python/*.c
