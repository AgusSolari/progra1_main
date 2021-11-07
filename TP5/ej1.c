/* EJERCICIO 1
1.Asumiendo  que x  =  5,  y  =  10,  ¿Cuál  es  el  valor  después  de  llamar  a swap1(x, y)?
*/

#include <stdio.h>

int main (void)
{

    int x = 5;
    int y = 10;
    swap1(x,y);

    return 0;  

}

void swap1(int a, int b)  // En este caso lo que esta recibiendo la funcion son copias de las variables x e y

{ 
    int t; 
    t = a; 
    a = b; 
    b = t;      // Inclso cuando termina la funcion no devuelve ningun valor
}