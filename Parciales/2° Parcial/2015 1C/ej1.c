//
// Created by agussolari on 13/11/21.
//

#include <stdio.h>



// defino mis tipos
typedef float punto_t;
typedef punto_t coordenada_t[1];
typedef coordenada_t triang_t[2];

float ptriang (triang_t *PUNTOS);

triang_t tablero;

int main(void)
{


    // imprimo una celda, a través de una función
    tablero[0][0] = 1.0;
    tablero[0][1]= 1.0;

    float perimetro = ptriang(tablero);

    printf("Perimetro = %f", perimetro);





    return 0;
}
float ptriang (triang_t *PUNTOS)
{
    float x = 0, y=0 ;
    for (int i = 0; i < 2; ++i)
        x += *(PUNTOS[i][0]);

    for (int i = 0; i < 2; ++i)
        y += *(PUNTOS[i][1]);
    return (x+y);

}