/* EJERICIO 5
Asumiendo  que x[5]  =  {0,  1,  2,  3,  4}.  ¿Qué  imprime print3(&x[0])? ¿Y print3(&x[2])? ¿Y print3(&x[4])?
*/
#include <stdio.h>

void print3(int *a);

int main (void)
{
    int x[5]  =  {0,  1,  2,  3,  4};

    print3(&x[0]);      //?  La funcion recibe la posicion de memoria del pirmer elemento del arreglo
    print3(&x[2]);      //!   La funcion recibe la posicion de memoria del tercer elemento del arreglo
    print3(&x[4]);      //*     La funcion recibe la posicion de memoria del 5 elemento del arreglo

    return 0;
}

void print3(int *a)     // ? *a=  &x[0] = 0 -> a= Direccion de memoria -> *a= contenido de la posicion de memoria 
                        //!  *a=  &x[2] = 2 -> a = Direccion de memoria -> *a = contenido de la posicion de memoria
                        //*   *a= &x[4] = 4 
{ 
    printf("%d\n", *a); 
    // ? IMPRIME :  0 
    // ! IMPIRME : 2
    // * IMPRIME : 4
}