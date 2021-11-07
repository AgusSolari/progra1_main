/* EJERCICIO 1 
    Predecir la salida del siguiente codigo
*/

#include <stdio.h>

int a = 3;

void fun1(void)
	{	
	printf("%d\n", a++);		// No entra a la funcion si no es llamada
	}		

void fun2(void)
	{
	int a = -2;
	printf("%d\n", a++);		// Idem anterior
	}
int main()
	{
	int a = 10;				
	printf("%d\n", a++);		// IMPRIME : 10  ; deja a "al = 11"
	fun1();						//IMPRIME: 3  ; deja ag= 4
	fun2();						// IMPRIME: -2 ; deja al2 = -1, pero como la variable se vuelve a definir cuando entra a la funcion no interesa el valor con el que queda
	fun1();						// IMPIRME : 4 ; deja ag= 5
	fun2();						// IMPRIME : -2 ; deja al2 = -1
	printf("%d\n", a++);		// IMPRIME : 11 ; deja "al = 12"

	return 0;
}


		/* IMPRIME 
		10
		3
		-2
		4
		-2				// imprime un -2 nuevamente ya que cuando entra a la funcion, el valor de la varibale a se vuelve a definir
		11
		*/ 
