/* 
	EJERCICIO 6
Escribir un programa que complete  un arreglo con los números pares comprendidos entre 1 y 100 y los imprimaen pantalla en orden descendente.
*/

#include <stdio.h>

#define N 50

void pares ( int fuente[], int n);

int main (void)
{
	int arreglo[N];
	pares(arreglo, N);

	for (int i= N/2 ; i > 0 ; i--)
	{
		printf("%d \n", arreglo [i] );
	}

	return 0;
}

void pares ( int fuente[], int n)
{
	for(int i=1 ; i <= (n/2) ; i++)
	{
		fuente[i] = 2*i;
	}
}