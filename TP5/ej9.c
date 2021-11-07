/* EJERCICIO 9 
¿ Que ocurre si se declara un array de la siguiente manera?
*/

#include <stdio.h>

#define N 100

int main (void)
{
    int a[N * N];

    int x= sizeof(a);

    printf("%d", x);


    return 0;

}

//! Este programa tiene dos posibilidades
//!   1. Te manda a la mierda el compilador    2. Te hace un array de 10.000 elementos (CORRECTA)