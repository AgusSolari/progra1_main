//
// EJERCICIO 5
// Indicar que imprime el siguiente programa si se lo invoca con el numero 7
//

#include <stdio.h>
void fun (int n);

int main (void)
{
	fun(7);

}

void fun (int n)
{

	if (n<3)
	{
		putchar('0'+n);
	}
	else
	{
		fun(n-1);// fun(6)
		fun(n-3);// fun(4)
	}
}
/*
 * fun(6) ->         fun(5)                y                fun(3)
 * 		  fun(4)        y       fun(2)		          fun(2)  y    fun(0)
 * 	 fun(3)      y    fun(1)	 4) 2                   5) 2      6) 0
 * fun(2) y fun(0)   3) 1
 * 1) 2     2) 0
 *
 *
 * fun(6) imprime: 201220
 *
 *
 *
 *
 * fun(4) : 201
 *
 *
 *
 *
 *
 *
 */

