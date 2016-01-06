
# define the compiler and options
CC=gcc
CFLAGS=-c -Wall


all: program

program: file1.o file2.o
	$(CC) file1.o file2.o -o run_me

file1.o: file1.c
	$(CC) $(CFLAGS) file1.c


file2.o: file2.c file2.h
	$(CC) $(CFLAGS) file2.c

clean:
	rm *.o run_me
