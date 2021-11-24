#include <stdio.h>
#include <stdlib.h>
#define BUFFER 64

int comparar (const void **p1, const void **p2);
int largo( char *str);
typedef int (*fncomparar_t) (const void *, const void *);


int main(int argc, char **argv)
{
	argv = argv + 1; //Avanzo el puntero a string para que no tome el primer argumento
	--argc;

	char** p= argv;

	for (int j = 0; j < argc; ++j)
	{
		printf("String: %s ; Tamaño: %d \n", p[j], largo(p[j]));
	}

	qsort(p, argc, sizeof(*p) , (fncomparar_t) comparar);
	printf("\n");
	for (int j = 0; j < argc; ++j)
	{
		printf("String: %s ; Tamaño: %d \n", p[j], largo(p[j]));
	}

	return 0;
}

int comparar (const void **p1, const void **p2) //Esta funcion se encarga de devolver que string es mayor, dato que nos sirve para utilizarlo en al funcion qsort
{
	if( largo(*((char**)p1)) < largo(*((char**)p2)))
		return -1;
	else if(largo(*((char**)p1)) == largo(*((char**)p2)))
		return 0;
	else if(largo(*((char**)p1)) > largo(*((char**)p2)))
		return 1;

}

int largo( char *str)
{
	if(*str == '\0')
	{
		return 0;
	}
	return (largo (++str)+1);
}