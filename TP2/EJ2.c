// 2. Prediga la salida del siguiente programa, verifique y justifique los resultados obtenidos.
#include <stdio.h>

int main(void)
{
    int x = 5;
    while (x > 0);
    {
        printf("%d", --x);
    }
    printf("hola");
    return 0;
}

//IMPRIMIR:
//  El programa no va a imprimir nada ya que a continuacion del While hay un " ; " el cual provoca de que la condicion no se analice// o se cumpla siempre