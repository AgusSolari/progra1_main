/* EJERCICIO 2: 
2.Sea un programa, llamado ej1, se ejecuta con el comando:
user@pc :~$ ./.ej1 < test.txt
El contenido del archivo test.txtes:
    abcdefghi
    ihgfedcba

Predecirla salida delprograma ej1, si el código es el siguiente:
*/

#include <stdio.h>
int main(void)
{
    int c;
    while ((c = getchar()) != 'e')          // toma el contenido del text, mientras que la letra no sea la e, en este caso se para el programa
    {
        putchar(c + 'A' - 'a');     // En esta instruccion el " + 'A' - 'a'" no hace nada, 
    }
    return 0;
}