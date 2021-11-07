//Escribir un programa que dada una variable tipo double calcule (es decir, genere una nueva variable con el valor) e imprima: el modulo del número (función truncado)

#include <stdio.h>

int main(void)
{
    double x,y;
    x=-3.5;
    y= ( x>=0 ? x : (-1)*x );
    printf("x=%.3f\t y=%.3f\n", x,y);
    return 0;
    
}