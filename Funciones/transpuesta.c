#define N 5

//Prototipo
void transponer (double mat[N][N]);

//Llamado
transponer(mat);

//Funcion
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