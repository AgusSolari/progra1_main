#include <stdio.h>
void conv ( double *v1, double *v2, double *rta, int s1, int s2 );  // La funcion recibe los punteros de los dos vectores


int main (void)
{
	double v1[]= {1,2,3};
	double v2[]= {1,2};
	double rta[10];
	conv( v1, v2, rta, 3,2);

}

void conv ( double *v1, double *v2, double *rta, int s1, int s2)  // La funcion recibe los punteros de los dos vectores
{
	int srta = s1+s2;
	int i, j, k ; //Defino 3 variables que me seriviran para desplazarme sobre los elementos de los vectores ( i me desplazo sobre rta, j sobre v1, k sobre v2 )
	
	for( i=0 ; i < srta ; i++ )
	{
		rta[i] = 0; //Limpio el valor del arreglo

		for( j= 0 ; j < s1 ; j++ )
		{
			for ( k= 0 ; k < s2 ; k++)
			{
				if( i == (k+j)) // sumo los grados y veo si coincide con la posicion de rta
				{
					rta[i] += v1[j] * v2[k] ;
				}	
			}
		}
	}
}

