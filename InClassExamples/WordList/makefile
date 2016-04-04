# define the compiler and options
CC=gcc
CFLAGS=-c -Wall -std=c99

all: program

program: program.o wordlist.o
	$(CC) program.o wordlist.o -o wordlistprogram

program.o: program.c
	$(CC) $(CFLAGS) program.c

wordlist.o: wordlist.c
	$(CC) $(CFLAGS) wordlist.c



clean: 
	rm *.o wordlistprogram
