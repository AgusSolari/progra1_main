/*
	EJERCICIO 3
	Indicar que imprime la siguiente fracción de un programa.
	Suponerque ya se encuentras definidas las variables 

	- arr(arreglo de 9 elementos tipo int)
	- p2i(puntero  a int,  apuntando  al quintoelemento  de arr)
	- p2f(puntero a float)

	Suponer el programa corre en el HC11 (plataforma de 16 bits) que la variable arr 
	comienza en la dirección 0x1000.

*/
#include <stdio.h>

int main (void)
{	
	int arr[8];
	int *p2i = &arr[4];
	float *p2f;
	
	printf("%p\n", p2i); // Imprime: 0x1000
	printf("%p\n", p2i-1); //Imprime: 0x0FFF
	printf("%d\n", p2i-arr);//Imprime: 4
	/*
	Como: &p2i = 0x1004 y &arr = 0x1000
	*/
	printf("%d\n", sizeof(arr)); //Imprime: 32
	printf("%d\n", sizeof(p2f)); //Imprime: 8

	return 0;
}
