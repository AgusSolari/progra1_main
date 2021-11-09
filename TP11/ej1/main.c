/*
 *          CONSIGNA EJERCICIO 5
* Escribir un programa que utilice la librería escrita en el ejercicio 4 para simular que se
* tienen 8 LEDs conectados al puerto A. Se debe usar la librería creada en el ejercicio 1,
* y mostrar el estado de los LEDs en pantalla.
 */

/* 
* Por teclado, el usuario ingresará el número (del 0 al 7) del LED que se desea
* prender, en tiempo real.
* Con la letra 't', todos los LEDs deben cambiar al estado opuesto (si están encendidos
* apagarse y si están apagados encenderse).
* Con la letra 'c', se deberán apagar todos, y con 's', prender.
* Con la letra 'q', el programa finalizará.
 */

#include <stdio.h>
#include "stdint.h"
#include <stdlib.h>

#include "puerto.h"
#include "leds.h"

#define mascara 0xFFFF //mascara para borrar todos los bits
/*
 * 
 */
int main(void) {
    int c;
    printf("Lista de Comandos:\n"); //Imprimo una lista con los comandos posibles para el usuario
    printf("Para numeros del 0 al 7: se enciende el bit del numero ingresado\n");
    printf("La letra \"t\" intercambia el estado de todos los leds\n");
    printf("La letra \"c\" apaga todos los bits\n");
    printf("La letra \"s\" prende todos los bits\n");
    printf("Presione la letra \"q\" para finalizar del programa\n");
    printf("\nEstado Inicial de los LEDs:   ");
    for(int n=7; n>=0 ; n--)        //imprimo en pantalla el valor de los bits del puerto 
            {
		uint8_t bit= bitGet(PORT_A, n); //con un ciclo donde obtenemos el valor de los bits
		printf("%u", bit);
            }
    printf("\n");
    
    while ((c =getchar()))      //Busco el caracter ingresado por el usuario
    {
   
        if(c== 't')     //si es el comando t, uso la funcion bitToggle...
        {
            for(int x=0; x<8 ; x++)     //...en un ciclo para hacer el cambio de valor a los 8 bits del puerto
            {
                bitToggle(PORT_A, x);
            }
			printf("Nuevo estado de los LEDs:  ");
            for(int n=7; n>=0 ; n--)        //imprimo en pantalla el valor de los bits del puerto 
            {
            uint8_t bit= bitGet(PORT_A, n); //con un ciclo donde obtenemos el valor de los bits
            printf("%u ", bit);
            }
            printf("\n");
        }
            
        else if (c>='0' && c<'8') // si es un numero ingresado  por teclado
        {
            c= (c-'0');    //traduzco de ASCII a numero
	    leds(c);
            bitSet(PORT_A, c); //uso bitset para encender ese bit del puerto A
            printf("Nuevo estado de los LEDs:  ");
            for(int n=7; n>=0 ; n--)        //imprimo en pantalla el valor de los bits del puerto
            {
            uint8_t bit= bitGet(PORT_A, n);
            printf("%u ", bit);
            }
            printf("\n");
        }
            
        
        else if(c=='c') //si es 'c', debo apagar todos los bits
        {
            maskOff(PORT_A, mascara);   /*uso maskOff con una mascara la cual 
* tiene todos los bits en 1 asi todos los bits del puerto quedan en 0*/
			printf("Nuevo estado de los LEDs:  ");
            for(int n=7; n>=0 ; n--)   
            {
            uint8_t bit= bitGet(PORT_A, n);     //imprimo en pantalla el valor de los bits del puerto
            printf("%u ", bit);
            }
            printf("\n");
        } 
        else if (c== 's')   //si la letra es 's', todos los bits deben encenderse
        {
           maskOn(PORT_A, mascara); //Analogo al caso de la letra c pero con la funcion maskOn, que los deja en 1
			printf("Nuevo estado de los LEDs:  ");
           for(int n=7; n>=0 ; n--)        //imprimo en pantalla el valor de los bits del puerto
            {
            uint8_t bit= bitGet(PORT_A, n);
            printf("%u ", bit);
            }
           printf("\n");
        
        }
        else if (c=='q') //solo si se oprime 'q' se debe terminar la ejecucion
        {
            printf("Se ha terminado la ejecucion del programa\n");
            return 0;                                              //asi que dejo un mensaje y hago un return
        }
        else if (c!='\n') //el enter queda en el buffer de entrada asi que lo ignoro
        {
            printf("El comando %c no es valido\n", c);  //si no es un comando permitido lo rechazo y busco otro
        }
        
    }
}

