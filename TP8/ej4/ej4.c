/* 
			TRABAJO PRACTICO N°8
	Consigna: Implementar un módulo con una función, que dada una 
	entrada en formato de entrada de main por línea de comandos
	distinga entreopciones y parámetros y devuelva esta información 
	en tres arreglos a quien la llamó.

*/
#include <stdio.h>

#define MAX 50      //Definimos el tamaño maximo de los arreglos los cuales almacenan los argumentos de entrada

void orden (int argc, char *argv[], char *arrkey[], char *arrvalue[], char *arrparam[], int *cont1, int *cont2);  
void printArr (int *cont1, int *cont2, int argc, char *arrkey[], char *arrvalue[], char *arrparam[]);


//	*************
// 	*   MAIN    *
//	*************

int main (int argc, char *argv[])
{
	char *arrkey[MAX];
	char *arrvalue[MAX];        //Inicializacion de los arreglos los cuales contendran los argumentos
	char *arrparam[MAX];

	int cont1, cont2;

	orden(argc, argv, arrkey, arrvalue, arrparam, &cont1, &cont2);
	printArr(&cont1, &cont2, argc, arrkey, arrvalue, arrparam);
}

//	**********************
// 	*   FUNCION ORDEN    *
//	**********************
/*
	Esta fucion se encarga de ordenar las entradas recibidas que se encuentran en 
	argv en tres arreglos distintos. Uno para las claves, otro para valores y 
	otro para parametros. Recibe argc y tres punteros a los respectivos arreglos. 
	Estos arreglos contendrán punteros a char.
*/
void orden (int argc, char *argv[], char *arrkey[], char *arrvalue[], char *arrparam[], int *cont1, int *cont2)    
{
	int i = 1;        //Empiezo contador en 1 para ignorar la llamada a ejecucion del archivo
	*cont1 = 0;
	*cont2 = 0;        //Contadores de posicion dentro de los arrays
	while(i < argc)
	{    
		if ((argv[i][0]) == '-')        //Si es una clave
		{
			arrkey[(*cont1)] = (argv[i++] + 1);    //Asigno el puntero a la posicion correspondiente del arreglo de claves
			arrvalue[(*cont1)++] = argv[i++];    //Le asigno el puntero al valor a la posicion del array de valores 
		}
		else
		{
			arrparam[(*cont2)++]= argv[i++];	//Guardo el parametro ingresado en un arreglo especifico
		}
	}
}

//	*************************
// 	*   FUNCION PRINTARR    *
//	*************************
/*
	Esta funcion se encarga de imprimir en la consola de forma ordenada
	los argumentos que se ingresaron por linea de comandos desde el main
*/

void printArr (int *cont1, int *cont2, int argc, char *arrkey[], char *arrvalue[], char *arrparam[]) 
{
	int i,j; 
	for(i=0 ; i<(*cont1) ; i++)
	{
		printf("Opcion %d: Clave: %s ", (i+1), arrkey[i]);	// Imprime en la terminal los diferentes argumentos
		printf("Valor: %s\n",arrvalue[i]);
	}

	for(j=0 ; j<(*cont2) ; j++)
	{
		printf("Parametro %d: %s\n", (j+1), arrparam[j]);
	}

}
