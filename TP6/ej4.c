#include <stdio.h>

void rombo (int);

int main (void)
{

	rombo(500);

	return 0;
}



void rombo (int n)
{
	/*
	if (n < 1 && n> 25)
	{
		printf("Error en el valor introducido");
		return;
	}
*/

//PRIMERA PARTE
	for ( int i=0 ; i<n ; i++ )
	{
		for(int j=0; j < (n-i) -1 ; j++)
		{
			printf(" ");
		}
		for(int k=0; k <= 2*i; k++ )
		{
			printf("*");
		}
		printf("\n");
	}

	for( int i= 1 ; i<n ; i++)
	{
		for(int k=0 ; k < i ; k++)
		{
			printf(" ");
		}
		for(int j=0 ; j < 2*n -(2*i) -1 ; j++)
		{
			printf("*");
		}
		printf("\n");
	}

}