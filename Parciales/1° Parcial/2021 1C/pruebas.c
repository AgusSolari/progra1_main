#include <stdio.h>
#define N 5

unsigned long factorial (int n);
double potencia (double a, int b);

int main(void)
{
    for(int i=0; i< N ; i++)
    {
        printf("Factorial de %d = %d \n", i, factorial(i) );
        printf("Potencia de %d^2 = %.3f", i, potencia(i, 2)) ;

    }

    return 0;
}

unsigned long factorial (int n)
{
	unsigned long rta = n;
	for( int i= (n-1) ; i>0 ; i--)
	{
		rta= rta*i;
	}
	return rta;

}
double potencia (double a, int b)
{
    double c;
    for ( c = a ; b > 1; b--)
    {
        a=a*c;
    }

	if ( b==0 )
	{
		a=1;
	}
    return a;
}