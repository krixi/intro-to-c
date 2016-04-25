
# define the compiler and options
CC=g++
CFLAGS=-c -Wall


all: program

program: Vehicle.o Truck.o main.o
	$(CC) Vehicle.o Truck.o main.o -o runme

Vehicle.o: Vehicle.cpp Vehicle.hpp
	$(CC) $(CFLAGS) Vehicle.cpp

Truck.o: Truck.cpp Truck.hpp
	$(CC) $(CFLAGS) Truck.cpp

main.o: main.cpp 
	$(CC) $(CFLAGS) main.cpp

clean:
	rm *.o runme
