#include <stdio.h>


#include "config.h"
#include "utils.h"
#include "game.h"

//	*****************
// 	*	MAIN 	*
//	*****************

int main (void) {
	
	bool run = TRUE; // variable para mantener el programa funcionando indefinidamente

	// declaro e inicializo el estado inicial del mundo (MATRIZ HARDCODEADA)
	int original_world[HEIGHT][WIDTH] = {
		{_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_},
		{_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_},
		{_,_,O,O,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_},
		{_,_,_,O,O,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_},
		{_,_,_,O,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_},
		{_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_},
		{_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,O,_,_,_,_,_,_,_,_,_,_,_,_,_},
		{_,_,_,_,_,_,_,_,_,_,_,_,_,_,O,_,O,_,_,_,_,_,_,_,_,_,_,_,_,_},
		{_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,O,O,_,_,_,_,_,_,_,_,_,_,_,_,_},
		{_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_},
		{_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_},
		{_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_},
		{_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_},
		{_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_},
		{_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_},
	};

	// declaro el mundo
	int world[HEIGHT][WIDTH];

	unsigned long generations=0;

	// copio el estado inicial del mundo al mundo real
	copyMat(original_world, world);

	while (run)
	{
		printWorld(world); // imprime el estado actual del mundo

		printf("Generacion: %lu\n", generations);

		int gens = ask_gens(); // pregunto cuantas generaciones quiere hacer

		if (gens == 0)	// 0 ordena finalizar el juego
		{
			run = FALSE; 	// se rompe el ciclo para detener el programa
		}
		else if (gens == -1) // -1 ordena reiniciar el juego
		{
			copyMat(original_world, world); // Pongo el mundo en el estado inicial
			generations=0; // Seteo el contador de generaciones en cero
		}
		else
		{
			// Avanzo la cantidad de generaciones solicitadas
			for (unsigned int i=0; i < gens; i++)
			{
				nextGen(world); // Avanzo una generacion
				generations++;
			}
		}
	}

	return 0;
}
