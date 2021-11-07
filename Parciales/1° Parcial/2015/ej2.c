/* EJERCICIO 2
Indicar que imprime el siguiente programa
*/


#include<stdio.h>
#define MAXI 5

int a;      //Como es una variable global arranca con cero
int b=3;

int main (void)
{
    while (a < MAXI && b-->=0)
    {
        printf("%d%d\n",a,b);
    }
    a++;
    printf("%d%d\n",a,b);}


/* CALC AUX

b-- <= 0, entonces  b<=0 y depues b=b-1

IMPRIME:
02
01
00
0 -1
1 -2

*/
