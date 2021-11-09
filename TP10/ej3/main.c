/*
+		CONSIGNA EJERICICIO 3
 * Crear un arreglo de alumnos, represnetados por una estructura que alamacene
 * nombre, apellido y nota promedio en tres campos distintos. Luego ordenar el
 * arreglo usuando la funcion qsort() de manera que queden ordenados de la
 * sigiente manera:
 * 
 *	1. Ordenar por nota en orden decreciente
 *	2. Si comparten la misma nota ordenar por apellido en orden alfabetico
 *	3. Si tienen el mismo apellido ordenar por nombre en orden alfabetico
 */

#include <stdio.h>
#include <stdlib.h>

#define CANT_ALUMNOS 5

int comparar_nota ( const void *p1, const void *p2);
int comparar_strings (const void *p1, const void *p2);


typedef struct
{
    char nombre[20];
    char apellido[20];
    float nota;
    
}alumno_t;



int main(void)
{
    alumno_t alumnos[CANT_ALUMNOS];
    
    alumnos[0].nota = 10.0;
    alumnos[1].nota = 9.0;
    alumnos[2].nota = 8.0;
    alumnos[3].nota = 7.0;
    alumnos[4].nota = 6.0;

// Sin ordenar
    for(int j =0; j< CANT_ALUMNOS; j++)
    {
	printf("alumno_nota[%d]= %f\n", j, alumnos[j].nota);
    }
//Ordenado
    for(int i =0; i< CANT_ALUMNOS ; i++)
    {		
	qsort( &(alumnos[i].nota) , CANT_ALUMNOS, sizeof(alumno_t), comparar_nota);
    }
    
    printf("\n");
    
    for(int i =0; i< CANT_ALUMNOS; i++)
    {
	printf("alumno_nota[%d]= %f\n", i, alumnos[i].nota);
    }
    
    return (EXIT_SUCCESS);
}

int comparar_nota ( const void *p1, const void *p2)
{
    if( *(float*)p1 < *(float*)p2)
    {
	return -1;
    }
    else if( *(float*)p1 == *(float*)p2 )
    {
	return 0;
    }
    else if(*(float*)p1 > *(float*)p2) 
	return 1;
  
}

int comparar_strings (const void *p1, const void *p2)
{
    if( *(char*)p1 < *(char*)p2 )
    {
	return -1;
    }
    
    else if( *(char*)p1 == *(char*)p2 )
    {
	return comparar_strings((p1++), (p2++));
    }
    
    else if(*(char*)p1 > *(char*)p2) 
	return 1;
    
}