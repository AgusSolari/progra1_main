/*
 * EJERCICIO 5
 *  a) Declara una estrucyura que contenga un char y un puntero a una funcion que recibe nada y devuleve un int
 *  b) Usando ese tag de esa estrucyura crear un arreglo que contenga
 */

#include <stdio.h>
int test (void);

typedef struct
{
    char a;
    int (*func) (void);
}estructura_t;


 int main (void)
 {

    estructura_t arr[1];
    arr[1].a=50;

    printf("%d", arr[1].a);
 }

 int test (void)
 {
     printf("Hello World\n");
     return 0;
 }
