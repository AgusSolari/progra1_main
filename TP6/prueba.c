#include <stdio.h>

char texto[] = "Hola como va";

int main (void)
{
	char *p = texto + 2;   

	printf("*p= %c\n", *p);
	printf("p= %p\n", p);
	printf("texto= %p", texto);

	return 0;
}

