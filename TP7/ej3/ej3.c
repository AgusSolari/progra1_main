/* 
	EJERICICIO 3

Escribir una función que imprima el número de veces que fue invocada.
*/

#include <stdio.h>

int fun (void);

int main (void)
{
	fun();
	fun();
	fun();

	return 0;
}

int fun (void)
{
	static unsigned int contador = 1;
	printf(" Invocacion N°:%d\n", contador);
	contador++; 

	return 0;
}