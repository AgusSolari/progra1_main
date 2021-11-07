#ifndef UTILS_H
#define UTILS_H

#include "config.h"

//	*********************************
// 	*	FUNCIONES UTILITARIAS 	*
//	*********************************

// Convierte un arreglo de caracteres de numeros en su interpretación numérica no signada
unsigned int str2uint(char str[], unsigned int size);

// Copia el contenido de una matriz a otra. Ambas de igual dimension
void copyMat(int fromMat[HEIGHT][WIDTH], int toMat[HEIGHT][WIDTH]);

#endif
