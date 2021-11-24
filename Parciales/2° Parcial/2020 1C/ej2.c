//	EJERCICIO 2
// 	Crear una matriz identidad en el heap (con memoria dinamica)
//
//

#include <stdio.h>
#include <stdlib.h>

double* eye (unsigned int n);
void printMat (double *mat, unsigned int n);

int main (void)
{
	double* p = eye(3);


	return 0;
}

double* eye (unsigned int n)
{
	double* p;

	p= malloc( sizeof( double)* n* n);
	if(p == NULL)
	{
		return NULL;
	}
	else
	{
		for (int i = 0; i < n; ++i)
		{
			for (int j = 0; j < n; ++j)
			{
				if (i==j)
				{
					p[i*n+j]=1.0;
				}
			}
		}
		return p;
	}
}
