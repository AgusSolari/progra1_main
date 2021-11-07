/*
2. Escribir de manera recursiva una función que devuelve si un arreglo es capicúa
(es decir, sus elementos están espejados). El prototipo debe ser:

    int is_capicua(int* p1, int *p2);

Siendo p1 un puntero al primer elemento de un arreglo y p2 uno al último.
 */

/* 
 * File:   main.c
 * Author: agustin
 *
 * Created on October 17, 2021, 1:27 PM
 */

#include <stdio.h>

int is_capicua(int* p1, int *p2);
int x,y;

int main(void) 
{
    int x[] = {1,2,6,2,6};
    if(!(is_capicua( x, &x[4])))
    {
        printf("Es capicua\n");
    }
    
    else
    {
        printf("No es capicua\n");
    }

    return (0);
}


int is_capicua(int* p1, int *p2)
{

    if(*p1 == *p2)
    {

        p1++;
        p2--;
        x=*p1;
        y=*p2;
        
        if(p1==p2)
        {
            return 0;
        }
        
        is_capicua(p1,p2);
    }
    
    else if(*p1 != *p2)
    {
        return 1;
    }
    
}

