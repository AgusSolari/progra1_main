#include <stdio.h>

int t=6;			// Define Variable Global, con t=6

int myFun (int t)
{
	t=3;
	return t;
}
	int main ()
	{
		int x=1, y=2, z=3, t=5;
		printf( "x=%d, y=%d, z=%d, t=%d\n", x, y, z, t);  

		{
			int x=10;
			int y=20;
			printf( "x=%d,y=%d,z =%d ,t=%d\n",x,y,z,t); 	// De este printf, toma las variables x y t que no se definen en este bloque del bloque mas cercano, que seria la definicion del mail
		}
			{	
				int z =100;
				int t=5;
				myFun(t);			// Aca no hace nada ya que no esta guardando el valor de la funcion en ningun lado

				printf( "x=%d,y=%d,z =%d ,t=%d\n",x,y,z,t);
			}
			
	return 0;
	}


/*
	IMPRIME
	x=1 , y=2, z=3, t=5
	x=10, y=20, z=3, t=6
	x=10, y=20, z=100, t=3,
*/
