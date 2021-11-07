#include <stdio.h>

int getline (char* str) 
{     
	char c; // Leo nuevo caracter;
	int len = 0;             

	while ( c= getchar() , (c) != '\n') // Mientras que no termine el renglón     
	{        
		str[(len++)] = c; // Guardo caracter en str y                        
						// actualizo contador de caracteres     
	}     
	return len; // Devuelvo largo del string 
}


/* ERRORES
1. No inicializa el contador en cero, len=0
2. Cuando se naliza la condicion del while se pide que c != '\n', pero para ese momento del programa c no se definio
3. Faltan parentesis en c, ya que sino por la presedencia nunca analizaria el getchar()
4. Una recomendacion seria mejor hacer un post incremento, ya que sino, estariamos gastando un caracter del string y devolver un tamaño de la palabra erroneo
*/
