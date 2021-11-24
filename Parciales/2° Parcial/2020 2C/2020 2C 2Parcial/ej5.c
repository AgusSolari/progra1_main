/*
Sea un programa para trabajar con árboles genealógicos. Para gestionar la información de una persona, el programa almacena la siguiente información por persona:

Nombre y apellido de la persona (string).
Fecha de nacimiento (arreglo de enteros formato [dd, mm, aaaa)).
Madres/Padres (arreglo de punteros a personas).
Hijas/os (arreglo de punteros a personas).
Hermanas/os (arreglo de punteros a personas).

Se pide:
a. Declarar dicha estructura y asignarle el alias persona_t.
b. Escribir la función geniCant sobris, que recibe la información de una persona (mediante un puntero a persona_t) y devuelve
la cantidad de sobrinas/os que tiene esa persona.

Nota: todos los arreglos de personas son de largo fijo NMAX (constante previamente definida) y se completan usando un puntero NULL como terminador.
Por ejemplo: una persona con 2 hermanas tiene el primero elemento del arreglo correspondiente apuntando a una hermana, el segundo apuntando a la otra hermana y
el tercer elemento es NULL; una persona sin hijas/os tiene el primer elemento del arreglo correspondiente con valor NULL..
*/

#include <stdio.h>
#define NMAX 25

struct persona_t
{
	char nombre_apellido[20];
	int fecha_nacimiento[3];
	struct persona_t *madre_madre[NMAX];
	struct persona_t *hijos[NMAX];
	struct persona_t *hermanos[NMAX];

}yo;

unsigned int geniCantSobris (struct persona_t *persona);


int main (void)
{
	int sobris = geniCantSobris(&yo);



	return 0;
}
unsigned int geniCantSobris (struct persona_t *persona)
{

	if (persona != NULL)
	{
		unsigned int hermanos;
		int i=0;
		while (persona->hermanos[i]!= NULL)
		{
			hermanos++;
			i++;
		}

		unsigned int sobris=0;
		for (int j = 0; j < hermanos; ++j)
		{
			while((persona->hermanos[j])->hijos[sobris] != NULL)
			{
				sobris++;
			}
		}

		return (sobris);

	}
	return 0;
}
