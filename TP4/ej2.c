#include <stdio.h>
#define FIL 2
#define COL 2

void printmat(int mat[FIL][COL]);
int det (int mat[FIL][COL]);
int num (void);
unsigned int doublex (int a, int b);



int main (void)
{
    int mat[FIL][COL];

    for (int i = 0; i < FIL; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            printf("Ingresar valor de F:%d ; C:%d = ", i, j);
            mat[i][j]=num();
            printf("\n");
        }
    }



    printmat(mat);
    printf("Determinante de mat= %d\n", det(mat));

    return 0;

}

int det (int mat[FIL][COL])     // Recibe una matriz de 2*2 y devuleve el determinante en forma de int
{
    int det=0;
    det= mat[0][0]* mat[1][1] - mat[1][0]* mat[0][1];
    return det;
}

void printmat(int mat[FIL][COL])
{
    for (int i = 0; i < FIL; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            printf("| %d |", mat[i][j]);
        }
    printf("\n"); //Impirmo un eneter para pasar a la siguiente fila
    }
}
//Funcion que para converitr el getchar a numero
int num (void)
{
    static int digito [10]; // Defino un array en el cual se van a guardar los digitos del numero
	int i;
	int unidad = 0; //Defino una variable que indica la posicion en el array y por que 10^(unidad) se multiplica el numero
	int rta = 0; // En esta variable se guardar
	while ( i =getchar() , (i != '\n') )  //Condiciones= (caracter diferente a enter y que 48<= i <= 57, que es el 0 y el 9)
	{
		if ( (i < 48) || (i > 57))
		{
			printf("El numero ingresado es incorrecto");
			break;
		}

		i= i-'0'; //Convierto el caracter ASCII a numero
		digito[unidad] = i ; // Guardo el numero en el array
		unidad++;
	}

	unidad--; 

	for ( int contador = 0 ; unidad >= 0 ; unidad-- , contador++ )
	{
		rta= rta +  ( digito[contador] ) * (doublex( 10 , unidad) ); 
	}
	return rta; 

}

// Funcion de Potencia
unsigned int doublex (int a, int b)
{
    int c =a;
    for ( ; b > 1; b--)
    {
        a=a*c;
    }

	if ( b==0 )
	{
		a=1;
	}

    return a;
}