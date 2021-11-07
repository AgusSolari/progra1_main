#ifndef CONFIG_H
#define CONFIG_H


// Constantes auxiliares
#define bool		unsigned char		// Para usar con flags
#define TRUE		1
#define FALSE		0
#define	_			FALSE			// Celula muerta (usado para setear el estado inicial del mundo)
#define	O			TRUE			// Celula viva (usado para setear el estado inicial del mundo)


// tamaño del buffer para leer el input del stream
#define BUF_SIZE	4		// Limitado a 4 para no colgar el programa por mucho tiempo
							// (ya que esta constante limita la entrada numerica)


// CARACTERES DE AYUDA VISUAL
#define SEPARATOR	' '		//	Separador de celulas
#define	CELL_ALIVE	'*'		//	Caracter de celula viva
#define	CELL_DEAD	' '		//	Caracter de celula muerta


// CONSTANTES DE LA MATRIZ (MUNDO)	Nota: deben respetar las dimensiones de la matriz original_world[][]
#define WIDTH		30
#define HEIGHT		15

#endif
