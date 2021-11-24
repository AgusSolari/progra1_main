/*  EJERCICIO 2
 * Escribir una funcion que copie una variable usando memoria dinamica. El prototipo debe de ser
 *          void* varcopy (void *pv, int size);
 *         pv: puntero a variable a copiar
 *         size: cantidad de bytes que ocupa la variable
*/

#include <stdio.h>
#include <stdlib.h>

void* varcopy (void *pv, int size);

int main (void)
{
    int x= 5;
    int *p;

    p = varcopy( &x, sizeof(x));

    printf("%d", *p);
}


void* varcopy (void *pv, int size)
{
    char *p = malloc(size);

    p = pv;

    return p;

}

