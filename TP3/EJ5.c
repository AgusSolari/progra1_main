/* EJERICIO 5
	Escribir un programa que reciba un número por teclado e imprima dicho 
	número elevado al cuadrado(usar la función del ejercicio anterior para 
	realizar la cuenta). Se debe validar completamente el número ingresado 
	(es decir, indicar al usuario que  hubo  un  error  si  el  formato  del  
	número  ingresado  es  incorrecto),  y  se  debe poder ingresar cualquier 
	número real (en base decimal, positivo y negativo).No utilizar la función scanf()
*/

#include <stdio.h>

unsigned int doublex (int BASE, int EXPONENTE); //Prototico de la Funcion de potencia
int digito [10]; // Defino un array en el cual se van a guardar los digitos del numero

int main (void)

{
	int base, exponente;
	printf("Ingrese la Base\n");
	base = num();
	printf("Base = %d\n", base);

	printf("Ingrese el Exponente\n");
	exponente = num();
	printf("Exponente = %d\n", exponente);

	printf("Resultado : %d^ %d = %d\n", base, exponente, doublex(base, exponente));

	return 0;

}
	

//Funcion que para converitr el getchar a numero
int num (int rta)
{
	int i;
	int unidad = 0; //Defino una variable que indica la posicion en el array y por que 10^(unidad) se multiplica el numero
	rta = 0; // En esta variable se guardar
	while ( i =getchar() , (i != '\n') )  //Condiciones= (caracter diferente a enter y que 48<= i <= 57, que es el 0 y el 9)
	{
		if ( (i < 48) || (i > 57))
		{
			printf("El numero ingresado es incorrecto");
			break;
		}

		i= i-'0'; //Convierto el caracter ASCII a numero
		digito[unidad] = i ; // Guardo el numero en el array
		unidad++;
	}

	unidad--; 

	for ( int contador = 0 ; unidad >= 0 ; unidad-- , contador++ )
	{
		rta= rta +  ( digito[contador] ) * (doublex( 10 , unidad) ); 
	}
	return rta; 

}

// Funcion de Potencia
unsigned int doublex (int a, int b)
{



    int c =a;

    for ( ; b > 1; b--)
    {
        a=a*c;
    }

	if ( b==0 )
	{
		a=1;
	}

    return a;
}