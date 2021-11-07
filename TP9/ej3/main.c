/*
Verificación de Palíndromos
Escribir una función recursiva que verifique si una cadena es un palíndromo (se lee
igual al derecho y al revés). La función debe ignorar espacios y signos de
puntuación. La función debe ser recursiva, es decir, debe estar estructurada con
caso base y caso recursivo. Realizar un programa que permita que el usuario
ingrese una cadena, y use la función escrita anteriormente para verificar si es un
palíndromo. El programa debe mostrar el resultado de la evaluación en pantalla.
 */



/* 
 * File:   main.c
 * Author: agustin
 *
 * Created on October 17, 2021, 6:58 PM
 */

#include <stdio.h>

#define IS_CARACTER(x) ((((x)>= 'a' ) &&  ((x) <= 'z')) || (((x)>= 'A' ) &&  ((x) <= 'Z')))
#define MINUSCULA(x) ((((x) >= ('A')) && (x) <= ('Z')) ? ((x) + ('a') - ('A')) : (x) )

int is_palindromo (char *p1, char *p2);


int main(void) 
{
    char string[] = "Anita lava la tina";
    char *p1;
    p1 = string;
    
    char *p2 = p1;
    
    while ( *p2 != '\0') //Obtengo un puntero p2 al ultimo carcter del string
    {
        p2++;
    }
    p2--;
    
    if(!(is_palindromo(p1,p2)))
    {
        printf("El string: %s es un palindromo", string);
    }
    else
    {
        printf("El string: %s no es un palindromo", string);
  
    }
    return (0);
}

int is_palindromo (char *p1, char *p2) //P1 es un puntero al primer caracter del string
{

    

        if(MINUSCULA(*p1) == MINUSCULA(*p2) ) //Analizo si son la misma letra
        {
            if(p1 != p2) //Analizo si el puntero es diferente
            {
                p1++;
                p2--;
               
                is_palindromo(p1,p2);
                
            }
            else //Los punteros son iguales y todos los caracteres coincidieron 
            {
                return 0;
            }
        }
        else //Los caracteres no coinicideron, entonces puede ser que haya un espacio
        {
            if(*p1 == ' ' || *p2 == ' ' )
            {
                if(*p1 == ' ')
                {
                    p1++;
                }
                else if (*p2 == ' ')
                {
                    p2--;
                }
                
                is_palindromo(p1,p2); 
            }
            else
            {
                return 1;
            }
        }
}

