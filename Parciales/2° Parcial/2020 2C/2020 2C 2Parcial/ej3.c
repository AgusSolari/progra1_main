//
// Ejercicio 3
// Escribir un programa recursivo que devuelva el valor de las coordenadas de la matriz de tartaglia
//
#include <stdio.h>
int tartaglia (unsigned int i, unsigned int j);

int main (void)
{

	printf("Tartaglia ( %d, %d) =%d", 3,3,tartaglia( 3,3));


	return 0;
}


int tartaglia (unsigned int i, unsigned int j)
{
	if ( i <= 0 || j <= 0)
	{
		return 0;
	}
	else if (i == 1 || j == 1 )
	{
		return 1;
	}
	else if ( i >1 && j > 1)
	{
		return (tartaglia( i-1, j) + tartaglia(i, j-1));
	}
}

