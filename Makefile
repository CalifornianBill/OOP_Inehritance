CC = g++

all: hw05

hw05: hw05.h hw05.cpp hw05functions.o
	$(CC) hw05.cpp -o hw05 hw05functions.o

hw05functions.0: hw05.h hw05functions.cpp
	$(CC) -c hw05functions.cpp -o hw05functions.o

debug:
	g++ -g *.cpp
