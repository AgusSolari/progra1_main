// EJERICICIO 1: Transponer una matriz modificando la origina


#include <stdio.h>
#define N 3
void transponer (double mat[N][N]);


int main (void)
{
    double mat[N][N] ={ {1,2,3}, {4,5,6} , {7,8,9} };
    transponer(mat);


    return 0;
}

void transponer (double mat[N][N])
{
    double aux;
    for(int i=0 ; i< N-1 ; i++)
    {
        for (int j=i+1 ; j<N ; j++)
        {
            aux= mat[i][j];
            mat[i][j] = mat[j][i];
            mat[j][i]= aux;
        }
    }
}