/* 
    3. Un sensor de temperatura se encuentra conectado a una PC. Hacer un programa que imprima los siguientes 
    mensajes según sea la temperatura del medio ambiente.
            a. "Alta", si la temperatura se encuentra entre 30°C y 90°C.
            b. "Media", si la temperatura se encuentra entre 15°C y 30°C.
            c. "Baja", si la temperatura se encuentra entre 0°C y 15°C.
            d. "Alarma", si la temperatura es mayor a 90°C o inferior a 0°C.
    Para probar el programa usar una variable que se inicializa con el valor de temperatura de la constante TEMPER.

*/

#include <stdio.h>

int main (void)
{
    int TEMPER;
    int CONT = 30;

    for ( TEMPER=1 ; TEMPER<=CONT ; ++TEMPER )
    {

        if (TEMPER >= 30 && TEMPER <= 90)
        {
            printf("La temperatura es Alta, T= %d°\n", TEMPER);			//Imprimo en consola el mensaje de la respectiva Temperatura
        }

        else if (TEMPER >= 15 &&  TEMPER <= 30)
        {
            printf("La temperatura es Media, T= %d°\n", TEMPER);
        }

        else if (TEMPER >= 0 &&  TEMPER <= 15)
        {
            printf("La temperatura es Baja, T= %d°\n", TEMPER);
        }

        else			// Si ninguno de las anteriores condiciones se cumplio es porque la temperatura esta entre (-inf; 0) u (90; +inf)
        {
            printf("La temperatura esta en Alerta, T= %d°\n", TEMPER);			//Imprimo en consola la condicion de la temperatura
        }   
    }
    
    return 0;
}