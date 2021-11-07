#include <stdio.h>
#define CANTCARTAS 5

int pierna_poker (const int cartas[]);

int main (void)
{

	int cartas[] = { 212, 311, 411, 412, 413};


	if( (pierna_poker(cartas)) != 0)
	{
		printf("Pierna del %d\n", pierna_poker(cartas));
	}

	printf("No hubo pierna\n");

	return 0;
}

int pierna_poker (const int cartas[])
{
	int valor[CANTCARTAS];
	int palo[CANTCARTAS];

	for( int i=0; i< CANTCARTAS ; i++)
	{
		int paloaux, valoraux;
		paloaux= ((int)(cartas[i]/100) * 100 );
		palo[i]= paloaux;
		valoraux = cartas[i] - paloaux;
		printf("carta %d :%d\n", i, cartas[i]);
		valor[i] = valoraux;
	}


	for(int i=0 ; i< CANTCARTAS ; i++)
	{
		int contador = 0;
		for(int j=0; j < CANTCARTAS; j++)
		{
			if( i != j )
			{
				if((valor[i] == valor[j]) && (palo[i] != palo[j]))
				{
					contador++;
				}
			}
		}
		if(contador ==2)	//es dos porque incremnetamos contador si existe otro ademas con el que estamos comparando
		{
			return valor[i];
		}

	}


	return 0;
}
