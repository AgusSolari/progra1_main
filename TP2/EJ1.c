//1. Prediga la salida del siguiente programa, verifique y justifique los resultados obtenidos.
#include <stdio.h>

int main(void)
{
    char c;                                         //Define una variable C de tipo char, (1 BYTE)
    for (c = '1'; c <= '4'; c++)                    // Si es <= a 4, entonces ejecuta la expresion de a continuacion y luego lo incrementa en 1 al valor de C
        switch (c)
        {
        case '1':                                   //Como en el caso 1 no hay un "BREAK", entonces cuando se ejecute que c=1, se ejecutara tambien lo del caso 2
        case '2':
            printf("Caso a - %c\n", c);             //Imprime el valor de C como caracter
            break;
        case '3':
            printf("Caso b - %c\n", c);
            break;
        default:
            printf("Caso c - %c\n", c);
        }
    return 0;
}




//IMPRIMIR
//           Caso a -"ASCI del 1"
//           Caso a -"ASCI del 2"
//           Caso b -"ASCI del 3"
//           Caso c -"ASCI del 4"



//¿Qué pasa si eliminamos el primer break? ¿Qué pasa si eliminamos el primer y segundo break?
// RTA: En caso de que se eliminen el primer break, lo que sucedera es que si se cumple el caso 1 o el caso 2, el programa imprimira lo del caso 3 tambien;
// pero si se llaga a cumplir el caso 3, entonces imprimira solo lo del caso 3.
// En caso de que se quiten todos los "breaks" el programa realizara todos los casos en oren descendiente al que estan, hasta incluso el del "default"