//	EJERCICIO 1
// Corregir el sigiente problema, el cual se encarga de realizar el intercambio de dos elementos cualquiera.
// Donde p1 y p2 son punteros al primer y segundo elemento respectivamente y sixe es el tamaño de los elementos en bytes
//
/*
 *

void gswap (void *p1, void* p2, int size)
{
	char *aux;
	int i;

	for( pA = p1, pB = p2, i=0; i<= size; ++ii)
	{
		*aux= *p1;
		*p1 = *p2;
		*p2 = *aux;
	}
}
 */

// Solucion

#include <stdio.h>
void gswap (void *p1, void* p2, int size);

int main (void)
{
	int *p1, a = 50;
	p1= &a;

	int *p2, b = 70;
	p2= &b;

	printf("%d\n", *p1 );
	printf("%d\n", *p2 );

	gswap (&a, &b, sizeof(a));

	printf("%d\n", *p1 );
	printf("%d\n", *p2 );




	return 0;
}

void gswap (void *p1, void* p2, int size)
{
	char aux;
	int i;

	for(i=0; i < size; i++)
	{
		aux= ((char*)p1)[i];
		((char*)p1)[i] = ((char*)p2)[i];
		((char*)p2)[i] = aux;
	}
}
