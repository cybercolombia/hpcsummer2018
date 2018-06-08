# sample makefile
CC = gcc
CXX = g++
CFLAGS = -g -O3 -Wall -std=c99
FLAGS = -g -O3 -Wall
LIBS = -lm

default:
	cython pymatrix.pyx
	python setup.py build_ext --inplace
cleanall: clean
	rm -rf *.so
clean:
	rm -rf build *.c
