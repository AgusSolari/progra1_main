main: main.o funciones.o variables.o
	gcc main.o funciones.o varibales.o -o main -Wall

main.o: main.c main.h
	gcc main.c -c -Wall

funciones.o: funciones.c funciones.h
	gcc funciones.c -c -Wall

variables.o: variables.c
	gcc variables.c -c -Wall