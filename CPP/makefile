
# define the compiler and options
CC=g++
CFLAGS=-c -Wall


all: program

program: Person.o driver.o
	$(CC) Person.o driver.o -o run_me

Person.o: Person.cpp Person.hpp
	$(CC) $(CFLAGS) Person.cpp


driver.o: driver.cpp 
	$(CC) $(CFLAGS) driver.cpp

clean:
	rm *.o run_me
