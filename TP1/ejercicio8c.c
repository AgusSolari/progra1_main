//EJERICIO 8C
// Escribir un programa que dada una variable tipo double calcule (es decir, genere una nueva variable con el valor)
// e imprima el entero superior (función techo) el número redondeado a un entero

#include <stdio.h>
#define HALF 0.5
int main(void)
{
    double x;
    double y;
    double z;
    x=(2.5);
    z=(x>0? (x-(int)x) : (-(int)x+x)); //Me quedo con la parte
    printf("z=%f\n", z);
    y=(z>0? (z>= HALF? (int)x+1 : (int)x ) : (z<=-HALF? (int)x-1 : (int)x));
    printf("x=%f ; y=%f", x, y);
    return 0;

}