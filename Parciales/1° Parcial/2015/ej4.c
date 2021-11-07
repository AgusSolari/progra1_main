/* EJERCICIO 4
Indicar si el siguiente problemprograma tiene algun error
*/
#include <stdio.h>

int main (void)
{
    double x = 0.11;
    while (x -= 0.01)
    {
        printf("%f\n", x);
    }
    return 0;
}

/* //!ERRORES
1. Falta el return
2. Es muy probable que el while nunca termine, ya que no se esta tomando en cuneta el
error que tienen las variable double.
Esto significia que 0,01 * 11 != 0,11, ya que hay decimales de error que no se estan
tomando en cuenta y nunca va a coincidir
*/