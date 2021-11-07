#include <stdio.h>

unsigned int doublex (int BASE, int EXPONENTE); //Prototico de la Funcion de potencia
int digito [10]; // Defino un array en el cual se van a guardar los digitos del numero
int mat [3][3];
int v[3];
int vr[3];
void printmat(int mat[3][3]);
void prm3(int vr[3], int mat[3][3], int v[3]); 
void printvec(int v[3]);
int num (void);



int main (void)

{

	for (int i = 0; i < 3; i++)
	{
		printf("\n");
		printf("Ingresar fila %d:\n Fila %d = \n", i+1, i+1);
		for (int j = 0; j < 3; j++)
		{
			mat[i][j]=num();
		}
	}	

	printf("\n La matriz M=\n");        // Salto de linea al finalizar la fila

	printmat(mat);

	printf("\n Ingresar vector\n");        // Salto de linea al finalizar la fila

	for ( int i = 0; i < 3; i++)
	{
		v[i]=num();
	}

	printf("\n El vector V=\n");        // Salto de linea al finalizar la fila
	printvec(v);

	prm3( vr , mat, v); 

	printvec(vr);

	return 0;

}
void prm3(int vr[3], int mat[3][3], int v[3])
{
	for (int i = 0, j=0; i < 3; i++)
	{
		vr[i]= ( mat[i][j]*v[j] + mat[i][j+1]*v[j+1] + mat[i][j+2]*v[j+2]);
	}
}

void printmat(int mat[3][3])
{

	for (int i = 0 ; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf(" | %d | ", mat[i][j] );
		}
		printf("\n");        // Salto de linea al finalizar la fila
	}
	printf("\n");        // Salto de linea al finalizar la fila
}
void printvec(int v [3] )
{
	for (int i = 0; i < 3; i++)
	{
		printf("| %d | \n", v[i]);
	}
	printf("\n");        // Salto de linea al finalizar la fila
}



//Funcion que para converitr el getchar a numero
int num (void)
{
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