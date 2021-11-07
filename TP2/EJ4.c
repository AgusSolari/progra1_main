/* 4. Escribir un programa que imprima los números del 0 al 9 usando while. ¿Hay otra
manera de realizarlo? Implementarla.
*/
#include <stdio.h>

int main (void)
{
    int CONT = 10;

   while (CONT > 0)
    {
        --CONT;
        printf("%d\n", CONT);
    }

    return 0;
}