/* EJERICIO 1
Indicar cual es la salida del siguiente programa
*/
#include <stdio.h>

int main (void)
{
    int r,p;
    p=(char)0X12C;
    r=p++;
    printf("%x\n",r);

    return 0;
}


/* Calc Aux

Como char es de 1 bytes y se le esta intentando guardar un dato de que esta 
fuera de ese rango, lo que se va a producir es un trunqueo de los bits mas
significativo, es decir solo nos vamos a quedar con la parte mas baja

p=(char) 0x12C  ->  p= 2c

r= p++;  Esto es que : r=p y depues p= p+1
y como imprime r en hexa, entonces el resultado a imprimir es

    IMPRIME
        2C
    */