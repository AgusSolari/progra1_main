#include <stdio.h>
#define MAX 50

void orden (int argc, char *argv[], char *arrkey[], char *arrvalue[], char *arrparam[]); 
void printArr (int argc, char *arrkey[], char *arrvalue[], char *arrparam[]);
int alfnum (char *x);


int main (int argc, char *argv[])
{
	char *arrkey[MAX];
	char *arrvalue[MAX];
	char *arrparam[MAX];

	orden(argc, argv, arrkey, arrvalue, arrparam);
	printArr(argc, arrkey, arrvalue, arrparam);
}

void orden (int argc, char *argv[], char *arrkey[], char *arrvalue[], char *arrparam[])    
{
	int i = 1;        //Empiezo contador en 1 para ignorar la llamada a ejecucion del archivo
	int cont1 = 0 , cont2 = 0;        //contadores de posicion dentro de los arrays
	while(i < argc)
	{    
		if ((argv[i][0]) == '-')        //si es una clave
		{
			arrkey[cont1] = argv[i++];    //asigno el puntero a la posicion correspondiente del arreglo de claves
			if ( alfnum(argv[i]) )        //si el siguiente es un valor
			{
				arrvalue[cont1++] = argv[i++];    //le asigno el puntero a al valor a la posicion del array de valores 
			}
			else 
			{
				printf("Error en la entrada de valores en %s ", argv[i]);
				break;
			}
		}
		else
		{
			arrparam[cont2++]= argv[i++];
		}
	}
}

void printArr (int argc, char *arrkey[], char *arrvalue[], char *arrparam[]) 
{
	int i; 
	int contador = (argc/3);
	for(i=1 ; i< (contador + 1) ; i++)
	{
		printf("Opcion %d: Clave: %s ", i, arrkey[i-1]);
		printf("Valor: %s\n",arrvalue[i-1]);
		printf("Parametro %d: %s\n", i, arrparam[i-1]);

	}
}
int alfnum (char *x)
{
	int i, error = 0;
	for (i=0 ; x[i] != '\0' ; i++)
	{
	
		if (( (x[i] >= '0') && (x[i] <= '9')) || ( (x[i] >= 'A') && (x[i] <= 'Z') ) || ( (x[i] >= 'a') && (x[i] <= 'z') ) ) //filtro alfanumerico
			error = error;
		else 
			error = 1;
	}
	if (error == 1)
		return 0;
	else 
		return 1;
}


// x[0]= "HOLA"; 