/*      CONSIGNA 5
Escribir un programa que imprima el valor de e^x, utilizando su polinomio de Taylor.
*/
#include <stdio.h>

// void = vacío = (que no devuelve nada/que no recibe nada)

// OUT nombre (parametros de entrada)
// OUT = tipo de variable que devuelve
// int main (void)

int suma(int, int); // (declaro la funcion, para despues definirla)
unsigned int fact(unsigned int);

int main (void)
{
    for
    
    for (unsigned int i = 0; i < 10; i++)
    {
        printf("val: %u\t%u\n", i, fact(i));
    }
    
    //float y, x;
    //int orden = ;


    /* prin
    prin
   for(   ; ORDEN>=1 ; --ORDEN )
    {
        y= x<< ORDEN        // y=x^ORDEN
        
        y/= 
    } */


    return 0;

}

// defino la función
int suma(int a, int b)              // el int del comienzo es el tipo de variable que devuelve la funcion
{    
    return (a+b);
}

unsigned int fact(unsigned int num)
{
    unsigned int out=1;
    for (unsigned int i=1; i <= num; i++)
    {
        out = out*i;  // 1*2*3*4*5*...* num
    }
    
    return out;
}





#define RANGE	20

void plot(double axis, double val)
{
	printf("%+.1f |", axis);
	int spaces = RANGE + (int)(val*10.0f);
	for(; spaces > 0; spaces--)
	{
		if (axis==0.0 || axis==1.0 || axis==2.0 || axis==-1.0 || axis==-2.0)
			printf("-");		
		else
			printf(" ");
	}

	printf("%+.1f\n", val);

	// val == 0.0 ? printf("o\n") : printf("x\n");
}