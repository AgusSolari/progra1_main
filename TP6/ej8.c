#include <stdio.h>

char* strSplit(char* str ,char separador);

int main (void)
{
    char string[] = "Hola paisano";
    
    printf("%s", strSplit(string, ' '));


    return 0;
}


char* strSplit(char* str ,char separador)
{
    int i = 0;
    while ( str[i] != separador )
    {
        i++;
    }

// Si finalizo el while es porque encontro el separador en el string

    str= str + i +1;
    return str;
}