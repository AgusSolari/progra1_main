/* 
	Archivo: utils.c
	Descripcion: En este archivo se definen las funciones utilitarias, las cuales son necesarias para la correcta definicion
	de las funciones principales del juego. Sobre este archivo se definen las siguientes funciones:
		str2uint
		copyMat
*/

#include <stdio.h>

#include "utils.h"

// Convierto un array de caracteres numericos en su interpretacion numerica
unsigned int str2uint(char str[], unsigned int size)
{
	unsigned int out=0;

	for (unsigned int i = 0; i < size; i++)
	{
		char c = str[i]; // analizo caracter por caracter del arreglo

		if (c < '0' || c > '9') // Si no es numerico
		{
			break; 	// salgo del ciclo y retorno el valor calculado hasta ahora
		}
		else
		{
			c = c - '0';  // quito el desface de caracter ASCII
			out = out*10 + c; // Agrego el numero al acumulador
		}
	}
	
	return out;
}

// Funcion de Transferencia: copia el contenido de una matriz en la otra
void copyMat(int fromMat[HEIGHT][WIDTH], int toMat[HEIGHT][WIDTH])
{
	for (int y = 0; y < HEIGHT; y++) //Filas
	{
		for (int x = 0; x < WIDTH; x++) //Columnas
		{
			toMat[y][x] = fromMat[y][x]; // Copia elemento por elemento
		}
	}
}
