/*
	EJERCICIO 2
Indicar que imprime el siguiente programa en consola, suponiendo que se trabaja en una arquitectura de 32 bits.
Es decir que:
	- sizeof (int*) = 8
	- sizeof(int)= 4

En caso de que el programa no compile, corregirlo.

*/

#include <stdio.h>

int main (void)
{
	int var1[7][3] = { {1,2,3}, {4,5,6} }; 
	char **var2;
	int *var3[5];

	printf("%d \n", sizeof(var1));
	printf("%d \n", sizeof(var2));
	printf("%d \n", sizeof(var3));
	printf("%d \n", sizeof(*var1));

	return 0;
}  

/*
	Datos:
		- var1: arreglo de arreglo, es decir una matriz
		- var2: puntero a puntero char
		- var3: arreglo de 5 punteros

	Entonces:
		- sizeof(var1) = ( (7 x 3) x sizeof(int) ) = 7 x 3 x 4 = 84
		- sizeof(var2) = 8 (var2 es un puntero)
		- sizeof(var3) = 5 x sizeof(*int) = 5 x 8 = 40
		- sizeof(*var1) =  sizeof(int) x 3 = 12 (ya que *var1 es el arreglo que contiene a los datos de la primera fila, que son 3 int)

*/