main: main.o utils.o game.o
	gcc main.o utils.o game.o -o main

main.o: main.c config.h utils.h game.h
	gcc main.c -c -Wall
utils.o: utils.c utils.h
	gcc utils.c -c -Wall
game.o: game.c game.h utils.h
	gcc game.c -c -Wall

