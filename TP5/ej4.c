/* EJERCICIO 4
Asumiendo que x[5] = {0, 1, 2, 3, 4}. ¿Cuáles son los valores de xdespués de llamar swap2(x + 1, x + 4)
*/

#include <stdio.h>

void swap2( int *pa, int *pb);

int main (void)
{
    int x[5] = {0, 1, 2, 3, 4};
    swap2(x + 1, x + 4);

    return 0;
}

void swap2( int *pa, int *pb)  // *pa = &x+1  -> *pa= 1, entonces pa= direccion del segundo elemento 
{                           // *pb= &x+4 -> *pb= 4, pb = direccion del ultimo elemento 
    int aux;        //pa= direccion de la variable x y pb= direccion de la variable y
    aux= *pa;       // aux = 1
    *pa=*pb;        // *pa = *pb = 4
    *pb= aux;       // *pb = 1


}

// ? Sabemos que *pb = 1 y pb es la direccion del ultimo elemento del arrego
// ? Y como *pa= 4, y pa contiene la direccion del primer elemento del arreglo

// ! Entonces x[] = { 0, 4, 2, 3, 1 }