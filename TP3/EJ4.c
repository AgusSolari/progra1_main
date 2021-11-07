/* EJERCICIO 4
Escribir una función doublecuadrado(doublex) 
que devuelva el valor ingresado elevado al cuadrado.
*/

#include <stdio.h>

unsigned int doublex (a, b);

int main (void)
{

    int a=3, b=3 ,c ;

    c = doublex(a , b);

    printf(" POTENCIA: %d^%d= %d\n" , a, b, c );


    return 0;

}


unsigned int doublex (int a, int b)
{
    int c =a;

    for ( ; b > 1; b--)
    {
        a=a*c;
    }

    return a;
}