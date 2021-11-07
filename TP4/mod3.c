#include <stdio.h>

#define height 2
#define width 2 

    int matTemp[height][width]= { {1,2}, {3,4} };    // Matriz temporal en la que se guardan los estados de las diferentes celdas
    int mat[height][width];      //Matriz original "YA SE DEFINIO, LUEGO BORRAR"

void copyMat( int matTemp [height][width], int mat[height][width]);
void print(void);


int main (void)
{



//Copia de la matriz temporal a una matriz
	copyMat(matTemp, mat);
//Impirme la matriz en consola
	print();

	return 0;
}


//Funcion print
void print(void)
{
	unsigned int lastrow = 0;
	unsigned int lastcol = 0;

	for (unsigned int y = 1; y <= height; y++, lastcol++)  // For para recorrer filas enteras (eje vertical)
 	{
		for (unsigned int x = 0; x < width; x++) // For para recorrer items de la fila (eje horizontal)
			{
				printf("%-4u", mat[lastrow++][lastcol] );
			}
	(lastrow -= height);
	printf("\n");        // Salto de linea al finalizar la fila
	}
}
//Funcion de Transferencia
void copyMat( int matTemp [height][width], int mat[height][width])
{

    for ( int i = 0 ; (i<= height); i++)   //Filas
    {
        for (int j = 0 ; (j<= width); j++)    //Columnas
            {
                mat[i][j] = matTemp[i][j];
            }
    } 
}