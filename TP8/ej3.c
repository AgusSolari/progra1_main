/*
	EJERCICIO 3
	Explicar por qué el siguiente código no compila. 
	Corregir el código. Detallar en una tabla los valores de las variables a medida que ejecuta el programa.
*/
/*
#include <stdio.h>
int main(void)
{
	int a = 5;
*   void *p = &a;
*   void **pp = &p;

	printf("pp: %p\n", pp); Intenta desifrar el contenido de un puntero a void
	printf("*pp: %p\n", *pp); Idem anterior, intenta ver el contenido de un puntero a void
	printf("**pp: %d", **pp); Idem anterior
	
	return 0;
}

! Este codigo no compila ya que son punteros a void, el cual su contenido no puede ser desifrado

*/


#include <stdio.h>
int main(void)
{
	int a = 5;
	int *p;
	p = &a;
	int **pp;
	pp=&p;

	printf("pp: %p\n", pp); //IMPIRME: Direccion de puntero pp
	printf("*pp: %p\n", *pp);   //IMPRIME: Direccion de puntero p
	printf("**pp: %d\n", **pp);   //IMPRIME: Contenido de a
	
	return 0;
}