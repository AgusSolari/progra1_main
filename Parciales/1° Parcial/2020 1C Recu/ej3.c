/* 
EJERCICIO 3
Indicar que imprime el siguiete codigo
*/

#include <stdio.h>

#define D 10
#define X 20

char d = 30;
char x = 40;

int main (void)
{
    char d = 50;
    printf("D x %d %X\n", X,d); // D x 20 32

    x= 0x99; 
    d= (x == 0x99) // Como es una operacion logica, este valor devuelve en d un 1

    printf("%d %x\n", x, d); // -103 0

}

/* 
Como el rango de la variable x que es de tipo char es de -127 a 128, y yo le estoy intentando cargar un valor mas grande
del rango lo que se va a producir es un overflow llevando el valor de x a un valor negativo.
Entonces x= -103.

Cuando se analiza si x== 0x99, como al valor de x le ocurrio un overflow, entonces lo que se analiza es si -103== 153,
como esto es falso, osea 0, el valor que toma d=0.

Por lo tanto cuando se imprimen las variable lo que se imprime es:
    -103 0 