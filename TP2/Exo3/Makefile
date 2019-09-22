all: math.o main.o
	gcc -o programme math.o main.o

math.o: math.c math.h
	gcc -c math.c -Wall -ansi -pedantic -o math.o

main.o: main.c
	gcc -c main.c -Wall -ansi -pedantic -o main.o
