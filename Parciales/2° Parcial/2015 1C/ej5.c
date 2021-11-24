//
// Escribir un programa que imprima los argumentos que recibe por línea de comandos
//	Si no hay argumentos debe imprimir el mensaje “EMPTY”
//

#include <stdio.h>
#define TRUE 1

int main (int argc, const char* argv[])
{

	int c;

	while (TRUE)
	{
		while ( (c = getchar()) != '\n' )
		{
			putchar(c);
		}
		putchar('\n');

		if (c == '0')
		{
			printf("EMPTY");
			return 0;
		}

	}

	return 0;
}