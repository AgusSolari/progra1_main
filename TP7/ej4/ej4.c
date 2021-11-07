/*
	EJERCICIO 4
	¿Por  qué  el  siguiente  programa  no  compila? ¿Cómo  lo  arreglaría,  dejando  la variable x en el archivo file2.c?
*/

//* File 1

#include <stdio.h>

int main()
{
	printf("%d\n", x);
	return 0;
}


//*File 2

#include <stdio.h>

static int x = 5; 

/*
	El problema en estos archivos es que se esta declarando la variable x desde file 2 de forma estatica, esto
	implica que esta variable solo sera vista por los bloques y funciones que se encuentren dentro de ese archivo
	Incluso faltaria poner en file1 el prototipo de la variable, la cual la misma debe de estar declarada mediante extern

	Entonces, para solucionar estos problemas se haria lo siguiente

*/

//! File1

#include <stdio.h>

extern int x;

int main()
{
	printf("%d\n", x);
	return 0;
}

//!File2

#include <stdio.h>

int x = 5; 