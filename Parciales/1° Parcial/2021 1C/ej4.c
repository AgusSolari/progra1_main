/*
EJERCICIO 4
Indicar que imprime el siguiente programa
*/

#include <stdio.h>

int main (void)
{
	int var = -11.7;	//Como var es de tipo int, entonces var= -11 ya que se produjo un casteo
	printf("%f", (double)((var--)/3));

	//printf("%0010f \n", (double) (var--/3) );



	return 0;
}
/* CALC AUX
(double)(var--/3)= (double)[(var--)/3] = (double)[varr]

*/