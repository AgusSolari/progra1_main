/* 
    EJERICICIO 1
    Explicar porque el siguiente programa no compila y corregirlo
*/

#include <stdio.h>
int main(void)
{
    char a = 'h';
    char *p;    
    p = &a;
    printf("a: %c\n", *p); 
/* En caso de que este void *p; y se lo intente imprimir, este tirara error ya que 
este no puede ser desifrado 
*/
    return 0;
}