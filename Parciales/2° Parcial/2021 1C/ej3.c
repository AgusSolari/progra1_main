//
// Ejercicio 3
// Crear una funcion que cree una matriz de fomrma dinamica
//

#include <stdio.h>
#include <stdlib.h>
#define FIL 3
#define COL 4

double** dinmat (int i, int j);

int main (void)
{
	double ** p;

	p=dinmat(FIL,COL);

	for (int i = 0; i < FIL; ++i)
	{
		for (int j = 0; j < COL; ++j)
		{
			p[i][j] = i+j;
		}
	}

	for (int i = 0; i < FIL; ++i)
	{
		for (int j = 0; j < COL; ++j)
		{
			printf("| %.3f ", p[i][j]);
		}
		printf("\n");
	}


	return 0;
}

double** dinmat (int i, int j)
{
	double **mat = (double **) malloc(j * sizeof(double *));

	for (int k = 0; k < j; ++k)
	{
		//Creo las filas de j*size y guardo el puntero en fila[k]
		mat[k] = (double *) malloc(i * sizeof(double));

		if (mat[k] == NULL)
		{
			printf("Error para crear Fila: %d", k);
			//Libero la memoria que se reservo
			for ( ; k >= 0; k--)
			{
				free(mat[k]);
			}

		}
	}
	printf("La matriz fue creada correctamente\n");
	return mat;
}