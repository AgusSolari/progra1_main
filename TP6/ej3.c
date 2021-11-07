#include <stdio.h>

#define IDIOMA 0

int main (void)
{
#if IDIOMA
    printf("Hola mundo");
#endif

if( !IDIOMA)
{
    printf("Hello World");
}

    return 0;
}