// EJERCICIO 8B
// Escribir un programa que dada una variable tipo double calcule (es decir, genere una nueva variable con el valor) e imprima el entero inferior (función techo)

#include <stdio.h>

int main(void)
{
    double x;
    x=2,57;
    double y= ((int)x);

    printf("x=%f, y=%.3f\n", x, y);
    return 0;

}