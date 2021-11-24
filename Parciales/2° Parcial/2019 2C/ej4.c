//
// EJERCICIO 4
// Escribir una funcion recursiva que flipee los contenidos de un arreglo. Mediante el prototipo:
//          void FlipArr (int arr[]; int n);
// Siendo: arr[] un puntero al arreglo y n la cantidad de elementos del arreglo
//



// SOLO ANDA PARA LOS IMPARES



#include <stdio.h>

void FlipArr (int arr[], int n);
void swap (int *a, int *b);


int main (void)
{
    int arr [] ={ 0,1,2,3};

    for (int i =0; i<4 ; i++)
    {
        printf("arr[%d]=%d\n", i+1, arr[i]);
    }

    FlipArr(arr, 4);
    printf("\n");

    for (int i =0; i<4 ; i++)
    {
        printf("arr[%d]=%d\n", i+1, arr[i]);
    }

    return 0;
}

void FlipArr (int arr[], int n) {
    int *p1, *p2;

    p1=arr;
    p2= &arr[n-1];

    if(p1<p2)
    {
    swap(p1,p2);



        FlipArr(++arr, n-2);
    }

}

void swap (int *a, int *b) {
    int aux;

    aux = *a;
    *a = *b;
    *b = aux;
}