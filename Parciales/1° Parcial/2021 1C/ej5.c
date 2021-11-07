/*
    EJERCICIO 5
Escribir la funcion seno que calcule el seno mediante la serie de taylor
la funcion recibira valores de x y devolvera el valor calculado.
La cantidad de temrminos a utilizar esta definida mediante la cte N_TERM
*/


#include <stdio.h>

#define N_TERM 10

double seno (double x);
double factorial (int n);
double potencia (double a, int b);



int main (void)
{
    printf("sen(2)=%.3f", seno(0.5) );

    return 0;
}

double seno (double x)
{
    double rta = x;
    for (int i = 1 ; i<= N_TERM ; i++)
    {
        rta = rta + potencia( (-1) , 2*i +1 ) * (potencia( x , (2*i) + 1 ) / factorial( (2*i) + 1 ) ) ;
    }
    return rta;
}

double factorial (int n)
{
	double rta = n;
	for( int i= (n-1) ; i>0 ; i--)
	{
		rta= rta*i;
	}
	return rta;

}
double potencia (double a, int b)
{
    double c =a;
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