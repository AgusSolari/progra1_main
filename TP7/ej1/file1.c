/*
	EJERCICIO 1:
		Indicar de todas las variables el:
			tipo de persistencia (automática o estática), 
			alcance (bloque, función o archivo)
			tipo de enlace (interno o externo) 
	   
*/
#include <stdio.h>

static int x; //Variable estática, global y de enlace interno
int a, b; // Variable automatica, global y de enlace interno

int main(void) 
{ 
	int k; //Variable automatica, de bloque y de enlace interno
	fun1();

	return 0;
}
void fun1(void) 
{ 
	static int last; //Variable estatica, de funcion, de enlace interno
	int h; //Variable automatica, de funcion y de enlace interno
}