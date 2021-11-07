/* EJERCICIO 3
Asumiendo que x[5] = {0, 1, 2, 3, 4}. ¿Cuáles son los valores de xdespués de llamar swap3(x, 1, 4)? 
*/

#include <stdio.h>

void swap3(int a[], int i, int j);

int main (void)
{
    int x [5]= {0 , 1 , 2 , 3 , 4 };

    swap3(x, 1, 4);     // Cuando una funcion recibe un arreglo o matriz, lo que esta recibiendo no es una copia, sino un puntero. 
                        // Es por eso que cuando una funcion modifica un arreglo o matriz, los cambios se ven reflejados en la original
    return 0;
}
void swap3(int a[], int i, int j)   // La funcion recibe a[] = x[], i =1, j=4
{ 
    int t; 
    t = a[i];   // t= a[1] = x[1] = 1 -> t=1
    a[i] = a[j];    // a[i]= x[1] = a[j] = x[j] = x[4] = 4
    a[j] = t;       // a[j]= x[j] = x[4] = 1
}


// x[] = { 0 , 4 , 2 , 3 , 1 }