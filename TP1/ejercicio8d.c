//Escribir un programa que dada una variable tipo double calcule (es decir, genere una nueva variable con el valor) 
// e imprima :la parte entera del número (función truncado)

#include <stdio.h>

int main (void)
{
    double x;
    double y;         //X= input, Y= output
    x=-0.5;
    y= ( x>=0? (int)x : (int)x -1 );
    printf("x= %.3f\t y=%.3f\n", x,y);
    return 0;
    
}