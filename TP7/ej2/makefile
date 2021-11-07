#c. Escribir un makefile para el programa.

main: main.o input.o output.o process1.o process2.o
	gcc main.o input.o output.o process1.o process2.o -o main

main.o: main.c process1.h input.h output.h
	gcc main.c -c -Wall

input.o: input.c input.h process2.h list.h
	gcc input.c -c -Wall

output.o: output.c output.h
	gcc output.c -c -Wall

process1.o: process1.c process1.h
	gcc process1.c -c -Wall

process2.o: process2.c process2.h list.h
	gcc process2.c -c -Wall
