/*
	CONSIGNA EJERCICIO 7
		Dadas las variables m (cantidad de filas) y n (cantidad de
	columnas), imprimir en pantalla una matriz de números crecientes de izquierda a
	derecha y de arriba hacia abajo.
*/

#include <stdio.h>


#define M_ROWS	5		// M Filas

#define	N_COLS	4		// N Columnas

int main (void) 
{
	
	for (unsigned int y = 1; y <= M_ROWS; y++)		// For para recorrer filas enteras (eje vertical)
	{
		for (unsigned int x = 0; x < N_COLS; x++)	// For para recorrer items de la fila (eje horizontal)
		{
			printf("%-4u", x+y);
		}
		printf("\n");								// Salto de linea al finalizar la fila
	}

	return 0;
}