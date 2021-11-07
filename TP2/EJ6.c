/* 
	CONSIGNA EJERCICIO 6:
		Escribir un programa que imprima en pantalla si un número es primo o no (un número 
	natural es primo si posee exactamente dos divisores).
*/

#include <stdio.h>

#define NUMERO 		38		// Input de numero a evaluar

#define DIV_STOP	3		// Cantidad de divisores para detener el ciclo for

/****************************************************************************************
 *																						*
 *	Si la cantidad de divisores supera el 2 (variable cant>=DIV_STOP), el ciclo for 	*
 *	se corta ya que al detectar un divisor de más, el número no va a ser primo.			*
 *																						*
 ****************************************************************************************/

int main(void)
{	unsigned int input = NUMERO;

	unsigned char cont = 0; // contador de divisores con resto cero

	for (unsigned int div = 1; div <= input && cont < DIV_STOP; div++)
	{
		if (input % div == 0) // analizo si el resto es cero
		{
			cont++; // aumento la cantidad de divisores
		}
	}

	if (cont == 2)
	{
		printf("El numero %d es un numero primo\n", input);
	}
	else
	{
		printf("El numero %d no es un numero primo\n", input);
	}
}