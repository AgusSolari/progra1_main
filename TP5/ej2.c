/*  EJERCICIO 2
Asumiendo  que x  =  5,  y  =  10,  ¿Cuál  es  el  valor  de xe ydespués  de  llamar  a swap2(&x, &y)?
*/

#include <stdio.h>

void swap2( int *pa, int *pb);

int main (void)
{
    int x = 5;
    int y = 10;

    swap2(&x, &y);  //Le paso a la funcion las direcciones de memoria de las variables x e y

    return 0;

}

void swap2( int *pa, int *pb)       // La funcion crea punteros en los cuales se guardaran las posiciones de memorias de las variables que entren
{
    int aux;        //pa= direccion de la variable x y pb= direccion de la variable y
    aux= *pa;       // aux toma el valor de la posicion de memoria de pa ya que aux= * pa, el * indica que tomara el dato de la posicion indicada
    *pa=*pb;
    *pb= aux;

}

/*
int *pa = &x ; // Guardo en pa la direccion de memoria de la variable X

print pa // Imprime la direccion de memoria de la variable x

print *pa // Imprime el contenido de la direccion de memoria que contiene pa