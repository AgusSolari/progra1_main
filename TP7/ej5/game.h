#ifndef GAME_H
#define GAME_H

#include "config.h"

//	*********************************
// 	*	FUNCIONES DEL JUEGO 	*
//	*********************************

// Funciones públicas
void printWorld(int mat[HEIGHT][WIDTH]); // Imprime el estado actual del mundo
int ask_gens(void);					// pregunta y retorna cuantas generaciones quiere avanzar
void nextGen(int world[HEIGHT][WIDTH]); // avanza una generacion



#endif
