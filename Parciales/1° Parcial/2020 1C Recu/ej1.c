/* 
	EJERCICIO 1
Escirbir una fuiuncion llamada tri la cual imprime un triangulo rectangulo.
El mismo lo hace ubicando un angulo recto arriba a la dercha.
El centro debe de estar vacio y los bordes deben contener *
La funcion recibe un parametro n (unsigned int) y no devuleve nada
*/

#include <stdio.h>
void tri (unsigned int n);
int main (void)
{
	tri(60);
	return 0;
}

void tri (unsigned int n)
{
	if( n<1 && n>60)
	{
		printf("Error en el valor de n ingresado");
	}
	else
	{
		for (int i=0 ; i<n ; i++)		// Recorro las filas
		{
			for(int j=0; j<n ; j++ )	// Recorro las columnas
			{
				if( (i == j) || (i==0) || (j==(n-1)) )
				{
					printf("*");
				}
				else
				{
					printf(" ");
				}
				
			}
			printf("\n");
		}

	}
}