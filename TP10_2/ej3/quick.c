/*			EJERCICIO 3
Crear un arreglo de alumnos, representados por una ealumnouctura que almacene
nombre, apellido y nota promedio en tres campos distintos. Luego ordenar el
arreglo usando la función qsort(), de manera que queden ordenados por nota en
orden decreciente, si comparten la misma nota por apellido en orden alfabético, y
si tienen la misma nota y el mismo apellido ordenados por nombre en orden
alfabético.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_CH 20

typedef struct
{
	char nombre[MAX_CH];
	char apellido[MAX_CH];
	float nota_promedio;

}alumno_t;


void print( alumno_t *alumno, int n);
int comparar (const void *p1, const void *p2);



alumno_t curso[]= {
		{"Agustin", "Solari",   7.5f},
		{"Rafael",  "Dalzotto", 8.0f},
		{"Agustin", "Casas", 7.5f}
};

int main()
{
	int n = sizeof(curso)/sizeof(alumno_t);
	print(curso, n);
	printf("Ordenar\n");

	qsort(curso, n, sizeof(alumno_t), comparar)

	print(curso, 3);


	return 0;
}

void print( alumno_t *alumno, int n)
{
	int i;
	for (i=0; i < n ; i++)
		printf("%s\t %s\t %f\t\n", alumno[i].nombre, alumno[i].apellido , alumno[i].nota_promedio);
}


int comparar (const void *p1, const void *p2)
{
	alumno_t *pa = p1;
	alumno_t *pb = p2;

	if (pa->nota_promedio < pb->nota_promedio)
		return 1;
	else if (pa->nota_promedio == pb->nota_promedio)
	{
		if(strcmp(pa->apellido, pb->apellido) < 0)
			return 1;
		else if(strcmp(pa->apellido, pb->apellido) == 0)
		{
			if(strcmp(pa->nombre, pb->alumno) < 0)
				return 1;
			else if(strcmp(pa->nombre, pb->alumno)==0)
				return 0;
		}
	}
}
