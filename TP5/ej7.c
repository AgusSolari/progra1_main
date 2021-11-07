/* EJERCICIO /
¿Cual es la diferencia entre estas dos funciones?
*/

#include <stdio.h>

int middle1(int a[], int n);
int middle2(int *a, int n);



int main (void)
{
    int a[]= { 0 ,1 ,2 ,3 ,4};
    
    printf("%d \n", middle1 ( a, 5) );
    printf("%d \n", middle2 ( a, 5) ); 


}

int middle1(int a[], int n)
{ 
    return a[n/2]; 
} 

/* //! a[] es una direccion de memoria del primer elemento del arreglo
 ! Entonces cuando se hace a [n/2], como "a" tiene la posicion del primer elemento, devuelve el elemento dle medio del array
!   Lo que recibe es a[] = a
*/

int middle2(int *a, int n) 
{ 
    return a[n/2]; 
}

// ! En este caso a* = a[], entonces a* queda con el primer elemento del arreglo