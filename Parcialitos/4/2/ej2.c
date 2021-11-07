/*
	EJERCICIO 2
	Sea la funcion "busco_ascii" la cual recibe un string y el char a buscar dentro del string y devuelve 
	el puntero a la primera apraicion del char en cuestion
		a. Escribir el prototipo de la funcion
		b. Escribir una invocacion a dicha funcion, guardando su resultado en una variable. Definirla previamente

*/

#include <stdio.h>

char* busco_ascii( char arr[] , char ascii );

int main (void)
{
	char arr[]= "Hola";
	char ascii = 'l';

	char *p = busco_ascii(arr , ascii);

	printf("%c", *p);

	return 0;
}

char* busco_ascii( char arr[] , char ascii )
{
	int i=0;
	while ( arr[i] != ascii)
	{
		i++;
		arr++;
	}
	arr++; // Lo incremento ya que si no entro al while es porque encontro el ascii, entonces incremento el puntero para que quede apuntando al ASCII
	
	return arr;
}
