/* 
EJERCICIO 2
Escribir una funcio que determine si un string esta dentro de otro string
y devuelve rel resultado de :
        1 si lo encontro
        0 si no lo encontro
*/


#include <stdio.h>

int checkstr ( char *str1 , char *str2);

int main (void)
{
	char str1[] = "758";
	char str2[] = "434375823723";

	printf("Str1 esta contenida en Str2: %d\n", checkstr(str1, str2) );
}

int checkstr ( char *str1 , char *str2) 
{
	int sizestr1=0;
	while( str1[sizestr1] != '\0')
	{
		sizestr1++;
	}

	int contador=0, i=0 ;

    for(int j=0 ; ( str2[j] ) != '\0'; j++)
    {
        if (str1[i] == str2[j])
        {        
			for(int k=0 ; k< sizestr1 ; k++)
			{
				if( str1[k] == str2[j+k])
				{
					contador++;
				}
				else if( str1[k] != str2[j+k] )
				{
					break;
				}
			}

			if(contador == sizestr1)
			{
				return 1;
			}
        }
    }
	return 0;
}