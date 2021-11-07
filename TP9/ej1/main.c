/*
1. Escribir el código de la función recursiva dec2bin() que recibe un número como
argumento y lo imprime en la pantalla en binario.
 */

/* 
 * File:   main.c
 * Author: agustin
 *
 * Created on October 17, 2021, 1:17 PM
 */

#include <stdio.h>
#define BUFFER 7

void dec2bin (int x);
int i;
int j= BUFFER;
int arr[BUFFER];


int main(void) 
{
    int x=16;
    printf("x = %d\n", x);
    dec2bin(16);
    
    
    return (0);
}

void dec2bin (int x)
{    
    if( x%2 == 0)
    {
        arr[i++] = 0;
    }
    else
    {
        arr[i++] = 1;
    }
    
    x=(x/2)+arr[i-1];
    
    switch(x)
    {
        case 1:
        {
            arr[i++]=1;
            arr[i]=0;
            break;
        }
        case 0:
        {
            arr[i++]=0;
            break;
        }
        default:
            dec2bin(x);
            break;
    }
   
   
    
//Impresion de digito
    for( ; j>=0 ; j--)
    {
        printf(" %d", arr[j]); 
    }
}