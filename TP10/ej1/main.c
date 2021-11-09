/*
 *	    CONSIGNA EJERCICIO 1
 *  La libreria <stdio.h> contonene una funcion qsort() que permite aplicar el algoritmo
 * quicksort para ordenar un arreglo. El usuario pyede ordenear cualquier tipo de elementos 
 * y debe de proveer un puntero a una funcion que realiza la compraracion entre dos
 * elementos, utilizando el concepto de callback
 * 
 * Utilizar la funcion qsort() para ordenar un arreglo de numeros enteros
 */

/* 
 * File:   main.c
 * Author: agustin
 *
 * Created on October 27, 2021, 6:46 AM
 */

#include <stdio.h>
#include <stdlib.h>
#include "comparar.h"

/*
 * void qsort (void* base, size_t num, size_t size, int (*compar)(const void*,const void*));
 * 
 */


int main(int argc, char** argv) {

    char arr []={'a','b','t','u','c','f','h','i','j'};
    int n;
    n= (sizeof(arr)/sizeof(char)-1);
    
    qsort(arr, n, sizeof(char), comparar_letras);
    
    for(int i=0; i<=(n) ; i++)
    {
	printf("arr[%d]= %c\n", i, arr[i]);
    }
    
    return (EXIT_SUCCESS);
}