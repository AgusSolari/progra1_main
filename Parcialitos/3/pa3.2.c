// Parcialito 3.2
// Pregunta 2

//a) Escribir el prototipo de una funcion memalloc el cual recibe un unsigned int y devuelve un puntero char

#include <stdio.h>

char memalloc (unsigned int);

int main (void)
{

char rta;
rta= memalloc(16);

return 0;
}