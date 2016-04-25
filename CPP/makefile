
# define the compiler and options
CC=g++
CFLAGS=-c -Wall


all: program

program: Vehicle.o main.o
	$(CC) Vehicle.o main.o -o run_me

Vehicle.o: Vehicle.cpp Vehicle.hpp
	$(CC) $(CFLAGS) Vehicle.cpp


main.o: main.cpp 
	$(CC) $(CFLAGS) main.cpp

clean:
	rm *.o run_me
