/*
 *      EJERCICIO 3
 *     Que imprime el siguiente programa
 *
 */


#include <stdio.h>

int main (void)
{
    int x=7; // Define variable int con valor de 7
    int *p = &x; //Apunta un puntero p a int a la variable x

    printf("%d\n", *p++); //Por orden de precedencia podemos ver que *(p++) = *p y luego p = p+1


}