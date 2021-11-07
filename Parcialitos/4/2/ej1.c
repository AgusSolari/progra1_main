/* 
    EJRCICIO 1
    Escribir las expresiones solicitadas a continuacion (en una sola linea)
        a. Definir sin inicializar un arreglo de 5 elementos int
        b. Definir e inicializar una variable tipo puntero a int, haciendo, que apunte al tercer elemento del vector
        c. Asignarle el numero 17 al ultimo elemento del arreglo, pero accediento mediante el puntero

*/

#include <stdio.h>

int main (void)
{
    int arr[4];
    int *p = &arr[2];
    *(p+2) = 17;

    int i;
    for( i=0 ; i <= 4 ; i++)
    {
        printf("%d \n", arr[i]);
    }

}