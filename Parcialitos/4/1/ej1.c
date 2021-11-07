/*
EJERCICIO 1

Sea un programa multiarchivo para mostrar mensajes en un display alfanumerico. El programa se compone de:
	- Un modulo principal (main)
	- Un modulo de control del diplay
	- Un modulo para el manejo de señales digitales (gpic)

Se pide:

	1. Enumerar los archivos que componen este programa (solo aquellos que sean en lenguaje C)
		Los archivos que conforman este programa multiarchivo son:
			- main.c 
			- diplay.c
			- diplay.h
			- gpic.c
			- gpic.h

	2. ¿En cuales de los archivos se deben de escribir los prototipos de las funciones de manejo de display?
		Los prototipos de las funciones del modulo de display se deben de escribir en el archivo "display.h"

	3. ¿En cual archivo se deben escribir las funciones para el manejo de las señales digitales?
		Las funciones del manejo de las señales digitales de deben de escribir en el archivo "gpic.c"

	4. El tamaño de display es de 2 filas y 16 columnas. ¿ En cual archivo se deben deninir las constantes CANT_FILAS y CANT_COLUMNAS ?
		Como son constantes que se deben definir como publicar para que estas puedan ser vistas por diferentes archivos, las mismas
		se deben de definir en algun header, ese es el archivo "display.h"

	5. ¿Cuales archivos deben de incluir el archivo main.c?
		Ninguno, ya que el main es el archivo el cual debe de incluir los headers de las diferentes funciones
	
	6. Escribir un makefile del programa, compilando por separado cada modulo y luego linkeando el programa

	main: main.o display.c gpic.o
		gcc main.o display.o gpic.o -o main -g -Wall

	main.o: main.c display.h gpic.h
		gcc main.c -c -Wall

	display.o: display.c display.h
		gcc display.c -c -Wall
	
	gpic.o: gpic.c gpic.h
		gcc gpic.c -c -Wall