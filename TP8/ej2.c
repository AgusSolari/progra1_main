/* 
	EJERCICIO 2
	¿Qué sucede si apuntamos a un puntero con un cast incorrecto? 
	¿Qué ocurre cuando se lee y escribe a través de ese puntero? 
	Explicar el funcionamiento del siguiente código:
*/

#include <stdio.h>
int main(void)
{
	int a = 257;
	void *p;

	printf("a: %d\n", a);
	p = &a; 		//Apunto el puntero void a "a"

	*((int*)p) = 5;	//Casteo el puntero p a uno de tipo int ya que le voy a asignar un numero entero // (int*)p )
	printf("a: %d\n", a);
	return 0;
}