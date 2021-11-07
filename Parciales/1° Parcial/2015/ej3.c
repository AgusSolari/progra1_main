#include <stdio.h>

char mensaje[]="ABCD1234";
char *p;

int main (void)
{
    p= mensaje + 3; // p = "D1234"
    --p[-1];
    
/*
    printf("%c ",*--p); // p= "CD1234"
    printf("%c ",*p++); // p="D1234"
    printf("%c ",(*p)++); // p="E1234" y mensaje = "ABCE1234"
    printf("%c \n\n",*p); // p="E1234"
    printf("%s \n\n",mensaje);
    printf("%c ",*(--p)); // p= "CE1234"
    printf("%c ",*(p+1));  // p= "CE1234"
    printf("%c ",*mensaje);  
    printf("%c \n\n",*mensaje + 1);

    while (*p++)
    {
        printf("%c", *p);
    }
*/
    return 0;
}
/* CALC AUX
*--p: como -- en este caso tiene mayor presedencia ya que se el orden va de derecha a izquierda
*--p = * (--p). Entonces primero decrementa p, osea p= p-1 y luego con el * toma el dato de p-1

*p++: *(p++). Entonces primero tomas *p= p[0] = C y luego lo incremento, osea p=p+1

(*p)++ : primero imprime p[0], y luego dicho valor en el string es incrementado, es decir que p[0] = p[0] + 1

*p: es lo mismo que decir p[0]

*(--p): primero decrementa p: es decir p=p-1 y luego toma el valor de *(p-1)

*(p+1) = *( p + 1*ELSIZE ) , esto es que deja a p como estaba y luego toma el elemento siguiente del arreglo

*mensaje = mensaje[0]

*mensaje +1 : toma el primer elemento mensaje[0] y luego lo incrementa

IMPRIME:
CCDE

ABCE1234

DEAB

E1234


*/
