#include <stdio.h>

int ordenalfa (char *str1 , char *str2);
char minuscula ( char letra );



int main (void)
{
	int rta;

	char str1 [] = "Hola";
	char str2 [] = "Holas";

	rta = ordenalfa( str1, str2);

	printf("%d\n", rta);

	return 0;
}


int ordenalfa (char *str1 , char *str2)
{
	int i; 

	for ( i=0 ; (str1[i] != '\0') && (str2[i] != '\0' ) ; i++)
	{
		if ( str1[i] >= 'A' && str1 [i] <= 'Z')		//Analizo si la letra a analizar del str1 es una mayuscula y en caso de que lo sea la convierto a minuscula
		{
			str1[i] = minuscula( str1[i] );
		}

		if ( str2[i] >= 'A' && str2 [i] <= 'Z')		//Analizo si la letra a analizar del str2 es una mayuscula y en caso de que lo sea la convierto a minuscula
		{
			str2[i] = minuscula( str2[i] );
		}


		if (str1[i] > str2[i])
		{
			return 1;
		}

		else if( str1[i] < str2[i] )
		{
			return -1;
		}
		// Y en caso de que ambas letras sean iguales vuelve a incrementar el contador y analiza una nueva letra
	}

// Si el for de arriba termino es porque alguna palabra termino las fueron iguales hasta cierto punto y una o ambas terminaros

	if( ((str1[i]) == '\0') && ((str2[i]) == '\0') )		//Ambas palabras son iguales
	{
		return 0;
	}

	else if ( ( str1[i] ) == '\0' )
	{
		return -1;
	}
	
	else
	{
		return 1;
	}
	
}

char minuscula ( char letra )
{
	letra = letra + ( 'a' - 'A' ) ;
	return letra;
}