/* 
	Archivo: game.c
	Descripcion: Este archivo contiene las funciones necesarias para el correcto funcionamiento del juego, en el cual
	se definen las siguientes funciones:
		analizeCell
		printWorld
		nextGen
		ask_gen
*/

#include <stdio.h>

#include "game.h"
#include "utils.h"

// Prototipo de funciones privadas
static int analizeCell(int mat[HEIGHT][WIDTH], int y_pos, int x_pos);

// Funcion que analiza el estado de las celulas vecinas a la recibida. devuelve 1 si cumple las condiciones para vivir y 0 si no.
// Funcionamiento: Analiza una submatriz de a lo sumo 3x3. Puede ser menor si esta en los bordes
// Los limites se autoajustan con endpos y begpos
static int analizeCell(int mat[HEIGHT][WIDTH], int y_pos, int x_pos)
{
	// Establezco posiciones de inicio de analisis 
	int begposx = (x_pos == 0 ? x_pos : x_pos - 1);
	int begposy = (y_pos == 0 ? y_pos : y_pos - 1);

	//Establezco posiciones de finalizacion del analisis 
	int endposx = (x_pos == 0 ? x_pos : x_pos+1);
	int endposy = (y_pos == 0 ? y_pos : y_pos+1);

	int contviv = 0;			//contador de vecinos vivos
	int celula = mat[y_pos][x_pos]; 	//estado de la celula original (viva o muerta)

	for (int y = begposy; y < HEIGHT && y <= endposy; y++)	/* recorro todas las celulas vecinas, como nuestro espacio es finito, establezco limites */
	{
		for (int x = begposx; x < WIDTH && x <= endposx; x++)	
		{
			int posi = mat[y][x];	// estado de la celula vecina siendo analizada

			if (posi==1 && (y != y_pos || x != x_pos)) /* si esta viva aumento contador de vecinas vivas pero si es la coordenada de la celula original lo salteo */
			{
				++contviv;
			}
		}
	}

	// Si la celula esta viva y tiene 2 vecinos vive. 
	// Si la celula tiene 3 vecinos, vive no importa si esta viva o no
	if ((celula == 1 && contviv == 2) || contviv == 3)
	{
		return 1;
	}

	return 0;	//si ninguno de estos casos se cumple, la celula va a morir o seguir muerta
}



// Muestra por consola el estado del mundo, representando las celulas vivas/muertas
void printWorld(int mat[HEIGHT][WIDTH])
{
	for (unsigned int y = 0; y < HEIGHT; y++) // For para recorrer filas enteras (eje vertical)
	{
		for (unsigned int x = 0; x < WIDTH; x++) // For para recorrer items de la fila (eje horizontal)
		{
			putchar(SEPARATOR); // Imprimo el caracter separador
			if (mat[y][x])
			{
				putchar(CELL_ALIVE);	// Si la celula esta viva, muestra su caracter representativo
			}
			else
			{
				putchar(CELL_DEAD);		// Si esta muerta, hace lo contrario
			}
		}
		putchar(SEPARATOR);	// Al finalizar la fila, imprimo el separador
		putchar('\n');		// y el salto de linea
	}
}


// Avanza el estado del mundo en una sola generacion
void nextGen(int world[HEIGHT][WIDTH])
{
	// Creo una matriz temporal para guardar los resultados del análisis
	int worldTemp[HEIGHT][WIDTH];

	// Recorro toda la matriz analizando celda por celda
	for (unsigned int y = 0; y < HEIGHT; y++)
	{
		for (unsigned int x = 0; x < WIDTH; x++)
		{
			// analizeCell "escanea" los vecinos de la celula para evaluar si vive o muere
			// Analiza un entorno de 3x3 celulas, o menos si se trata de los bordes del mundo.
			worldTemp[y][x] = analizeCell(world, y, x);	// Guardamos los resultados en la matriz temporal
		}
	}
	
	// Copio los resultados de la matriz temporal a la principal
	copyMat(worldTemp, world);
}


// Entrada limitada a BUF_SIZE
// Pregunta cuantas generaciones se quiere avanzar
// Pregunta si quiere salir del juego o reiniciarlo
int ask_gens(void)
{
	int output=0; // inicio la variable para retornar

	printf("Si quiere finalizar el juego presione 'q'\n");
	printf("Si quiere reiniciar el juego presione 'r'\n");
	printf("Ingrese (num) cuantas generaciones desea avanzar:\n");


	char buf[BUF_SIZE];	// Buffer local para el input de la consola
	int idx=0;			// Index de posicion del buffer local / bytes ocupados

	bool numFlag=FALSE; 	// guarda true si el input contiene un numero
	bool rstFlag=FALSE;		// guarda true si se detecto 'r'
	bool quitFlag=FALSE;	// guarda true si se detecto 'q'

	// lectura de caracter
	char c;
	do{
		c = getchar();	// Leo el input hasta el salto de linea para limpiar el buffer del input

		if (idx < BUF_SIZE)		// Si hay espacio en el arreglo
			buf[idx++] = c;		// le agrego un caracter
								// Si no hay, no agrega nada


		if(!numFlag && c >= '0' && c <= '9')
			numFlag = TRUE;	// si detecta al menos un numero, entonces asumo que el input es numerico

		if (c == 'q')
			quitFlag=TRUE;
		
		if (c == 'r')
			rstFlag=TRUE;

	}while (c != EOF && c != '\n');	// Leo hasta vaciar el buffer del input
	

	//*******************************
	//*	ANALISIS DE INPUT	*
	//*******************************

	if (numFlag)			// Si hay un numero analizamos el numero
		output = str2uint(buf, idx); // Retorna la cantidad de N generaciones a avanzar

	else if(rstFlag)
		output = -1;	// Retorna -1 para indicar reset del juego

	else if(quitFlag)
		output = 0;		// Retorna 0 para salir del programa

	else if(c == '\n')	
		output = 1;		// Retorna 1 para avanzar una generacion
	
	return output;
}
