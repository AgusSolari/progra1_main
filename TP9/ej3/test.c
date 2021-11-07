/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   test.c
 * Author: agustin
 *
 * Created on October 17, 2021, 8:27 PM
 */

#include <stdio.h>
#include <stdlib.h>
#include "palindromos.h"

#define SUCCESS 0
#define FAIL 1
/*
 * Simple C Test Suite
 */


int pruebas_totales = 0;
int pruebas_exitosas = 0;
int pruebas_falladas = 0;

void palindromo(char *string, int esperado);


int main(void) 
{
    palindromo("Anana", SUCCESS);
    palindromo("Anita lava la tina", SUCCESS);
    palindromo("La ruta natural", SUCCESS);
    palindromo("A man, a plan, a canal, Panama", SUCCESS);
    
    palindromo("Hola", FAIL);
    palindromo("Chau", FAIL);
    palindromo("Buenas", FAIL);
    palindromo("Ananasa", FAIL);

    return (EXIT_SUCCESS);
}

void palindromo(char *string, int esperado) 
{
    static int n;
    n++;
     
    char *p1;
    p1 = string;
    
    char *p2 = p1;
    
    while ( *p2 != '\0') //Obtengo un puntero p2 al ultimo carcter del string
    {
        p2++;
    }
    p2--;
    
    if( (is_palindromo(p1,p2)) == esperado )
    {
        pruebas_exitosas++;
        printf("%%TEST_FINISHED%% time=0 palindromo_%d (test_palindromo) \n", n);
    }
    else
    {
        pruebas_falladas++;
        printf("%%TEST_FAILED%% time=0; esperando: %d , actual: %d\n", esperado, is_palindromo(p1,p2) );
    }
    
    
}

