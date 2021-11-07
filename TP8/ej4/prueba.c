/*
	Ejercicio 4
Implementar un módulo con una función, que dada una entrada en formato de entrada de 
main por línea de comandosdistinga entreopciones y parámetros y devuelva esta información 
en tres arreglos a quien la llamó

*/


#include <stdio.h>
#define MAX 50
/*
	La funcion readArgs recibe:
		contador: tamaño del arreglo keys
		argv: arreglo de la entrada del main
		keys: arreglo en el cual se van a guardar las keys
*/

void readArgs (int argc, char *argv[], char *keys[MAX]);
void printArr (char *arr[]);

int main (int argc, char *argv[])
{
	char *keys[MAX];

	readArgs(argc, argv, keys);
	printArr(keys);

	return 0;
}

void readArgs (int argc, char *argv[], char *keys[MAX])
{
	int i;
	int j=0;

	for(i= 0; i < argc; ++i)
	{
		if( argv[i][0] == '-')
		{
			keys[j] = argv[i];
			++j;
		}
	}

}

void printArr (int argc, char *arr[]) 
{
	int i; 
	for(i=0 ; i< (argc-1) ; i++)
	{
		printf("Argumento %d: %s\n", i, arr[i]);
	}
}
 