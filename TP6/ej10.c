#include <stdio.h>

#define N 3

void  transponer  (float mat[N][N]);
void printmat (float matriz[N][N]);



int main (void)
{
	float matriz [N][N]= { {1,2,3}, {4,5,6},{7,8,9} };

	printmat(*matriz);

	transponer(*matriz);

	printmat(*matriz);



	return 0;
}
void  transponer  (float mat[N][N])
{
	float mataux[N][N];

	for (int i =0 ; i<N ; i++)
	{
		for( int j=0; j<N ; j++)
		{
			mataux[i][j] = mat[j][i];
		}
	}

	for (int i =0 ; i<N ; i++)
	{
		for( int j=0; j<N ; j++)
		{
			mat[i][j]= mataux[i][j];
		}
	}

}


void printmat (float matriz[N][N])
{
	for(int i=0; i<N ; i++)
	{
		for (int j=0; j<N ; j++)
		{
			printf("|%.2f|", matriz[i][j]);
		}
		printf("\n");
	}
}