/* 
EJERCICIO 5: Implememtar las siguientes funciones
	a) unsigned long factorial (int n): hace el factorial de un numero
	b) int copiarn (char fuente[], char destino[], int n): La función copia como máximo n caracteres del string fuente en el string destino 
	y devuelve el número de caracteres copiados. A continuación escribir un programa (main) que haga uso de la misma.6)[1pt.] 


*/


#include <stdio.h>

unsigned long factorial (int n);
int copiarn(char fuente[] , char destino[] , int n);

int main(void)
{
	printf("Factorial de 3= %d\n", factorial (4) );

	char str1[]= "Hola Como Va";
	char str2[10];


	printf("Elementos Copiados: %ld \n", copiarn(str1 , str2 , 9));
	printf("Str2: %s\n", str2);
	printf("Str1: %s\n", str1);


	return 0;
}

int copiarn(char fuente[] , char destino[] , int n)
{
	int i=0;

	while (i<n)
	{
		destino[i]= fuente[i];
		i++;
	}
	destino[i] = '\0';
	
	return i; 
}


unsigned long factorial (int n)
{
	unsigned long rta = n;
	for( int i= (n-1) ; i>0 ; i--)
	{
		rta= rta*i;
	}
	return rta;

}