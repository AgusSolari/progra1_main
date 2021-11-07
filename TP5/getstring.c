/* EJERICIO 11 [ A ENTREGAR ]

Implementar  un  programa  que  reciba  del  usuario  dos  palabras  y determine  si  la  segunda  de  ellas  puede  formarse  completamente  con  letras contenidas en la primera. Por ejemplo, morsa/rosa, japoneses/esponja

*/

#include <stdio.h>

#define SIZE 10

char array1[10];
void getstring (); 

int main (void)
{

	getstring();


	return 0;
}



void getstring (void)
{
	char c = getchar();
	int i=0;

	while ( c!= '\n' && i< SIZE)
	{
		array1[i] = c;
		putchar(c);
		i++;
	}

}