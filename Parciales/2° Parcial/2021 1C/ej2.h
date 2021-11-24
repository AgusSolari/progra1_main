//
// Ejercicio 2
// Sea un drive para la utilizacion del mouse con lenguaje C. Dicho driver tiene 3 funciones.
// Escribir el header mouse.h considerancio buenas practicas, y eligiendo bien los argumentos de las funciones
//

#ifndef HOUSE_H
#define MOUSE_H

#include <stdio.h>
#include <stdbool.h>

typedef struct{
	bool right;
	bool left;
} click_t;

typedef struct
{
	char x;
	char y;
	click_t click;
}coordenada_t;

bool mouse_init(void);
void mouse_readStatus(coordenada_t coord);
bool mouse_registerCallback (coordenada_t coord, void *fn (coordenada_t coord);




#endif //MOUSE_H
