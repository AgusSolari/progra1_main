#include <stdio.h>

#define FIL 3
#define COL 3

int det2 (double mat[2][2]);
int det3(double mat[FIL][COL]);
int doublex (int a, int b);
int num (void);
void printmat(double mat[FIL][COL]);
int cof (int i, int j );
void adjunta(void); 
void transpuesta (void);
void inversa (void);





double mat [FIL][COL];
double adj [FIL][COL];
double trans [FIL][COL];
double inv [FIL][COL];




int main (void)
{


	for(int i = 0 ; i <FIL ; i++)
	{
		for(int j = 0 ; j < COL ; j++)
		{
			printf("Ingresar F:%d ; C:%d = ", i, j);
			mat[i][j]=num();
			printf("\n");
		}
	}

	printf("Matriz\n");
	printmat(mat);

	printf("\n");

	printf("Matriz Adjunta\n");
	adjunta();
	printmat(adj);

	printf("Matriz Ajunta Transpuesta\n");
	transpuesta();
	printmat(trans);

	printf("Matriz Inversa\n");
	inversa();
	printmat(inv);

	return 0;
}
// Funcion que calcula la inversa de la matriz
void inversa (void)
{
	int det= det3(mat);

	for (int i = 0 ; i < FIL ; i++)
	{
		for (int j = 0 ; j < COL ; j++)
		{
			inv[i][j] = (trans[i][j]/det);
		}
	}
}


//Funcion que calcula la inversa de la matriz
void transpuesta (void)
{

	for( int i =0 ; i < FIL ; i ++)
	{
		for (int j = 0 ; j < COL ; j++)
		{
			trans[i][j]= adj[j][i];
		}
	}
}


//Funcion que calcula la Matriz Adjunta 
void adjunta(void)
{
	for(int i=0 ; i< FIL ; i++ )
	{
		for(int j = 0 ; j< COL ; j++ )
		{
			adj[i][j] = (doublex((-1), (i+j)) ) * ( cof(i,j) );
		}
	}
}

//Funcion que calcula los cofactores de una matriz
int cof (int i, int j )
{
	double mataux [2][2];
	for( int m=0, f=0 ; m < FIL ; m++, f++)
	{
		if( m == i )
		{
			m++;

			if(m >= FIL)
			{
				break;
			}
		}

	for(int n=0 , c=0 ; n< COL ; n++, c++)
	{
		if(n==j)
		{
			n++;
			if(n >= COL)
			{
				break;
			}
		}
	
	mataux[f][c] = mat[m][n];
	}
	}

	return det2(mataux);	
}

//Funcion que calcula el determinanate de una matriz de 2*2
int det2 (double mat[2][2])     // Recibe una matriz de 2*2 y devuleve el determinante en forma de int
{
    int det=0;
    det= (mat[0][0]* mat[1][1]) - (mat[1][0]* mat[0][1]);
    return det;
}

//Funcion que calcula el determinante de una matriz de 3*3
int det3(double mat[FIL][COL])
{
	int det=0;
	
	det= mat[0][0] * ( mat[1][1] * mat[2][2] - mat[2][1] * mat[1][2] );
	det-= mat[0][1] * ( mat[1][0] * mat[2][2] - mat[2][0] * mat[1][2] );
	det+= mat[0][2] * ( mat[1][0] * mat[2][1] - mat[2][0] * mat[1][1] );

	return det;

}

//Funcion que imprime matriz en pantalla
void printmat(double mat[FIL][COL])
{
    for (int i = 0; i < FIL; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            printf("| %.2f |", mat[i][j]);
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
		if ( (i < '0') || (i > '9'))
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
int doublex (int a, int b)
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