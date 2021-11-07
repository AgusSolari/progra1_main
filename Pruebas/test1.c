#include <stdio.h>

double* conv ( double *v1, double *v2); // La funcion recibe los punteros de los dos vectores

int main(void)
{
	double v1[] = {1,2,-3};
	double v2[] = {7,-5};

	double *vrta = conv(v1,v2);


}

double* conv ( double *v1, double *v2) // La funcion recibe los punteros de los dos vectores
{
	int s1=0;
	int s2=0; // Defino variables en donde se van a guardar los tamaños de los vectores

	while ( v1[s1] != '\0' )
	{
		s1++;//Aumento el contador del size siempre y cuando en esa posicion no exista un fin de linea
	}
	while ( v2[s1] != '\0' )
	{
	s2++;//Aumento el contador del size siempre y cuando en esa posicion no exista un fin de linea
	}
	//Sabemos que el tamaño de v1*v2 va a ser de vrta= (s1+s2)-1; entonces con este dato defino el nuevo vector

	int srta = s1+s2;
	double rta [srta];

	int i, j, k ;//Defino 3 variables que me seriviran para desplazarme sobre los elementos de los vectores ( i me desplazo sobre rta, j sobre v1, k sobre v2 )
	for( i=0 ; i < srta ; i++ )
	{
		for( j= 0 ; j <= s1 ; j++ )
		{
			for ( k=0 ; k <= s2 ; k++)
			{	
				if( i == (k+j))// sumo los grados y veo si coincide con la posicion de rta
				{
					rta[i] = rta[i] +( v1[j] * v2[k] ) ;
				}
			}
		}
	}

	return &rta[0];
}