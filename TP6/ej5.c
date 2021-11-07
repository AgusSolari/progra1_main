#include <stdio.h>

void CamelCase (char *string);
char toUpper (char letra);
char toLower (char letra);
int isUpper (char letra);
int isLower (char letra);


int main (void)
{

	char string [] = "toDOoO bIen y vOS";

	printf("Word: %s\n", string);

	CamelCase(string);

	printf("CamelCase: %s\n", string);



	return 0;
}

void CamelCase (char *string)
{
	int i=0;

	if( isLower(string[i]) )	//Primera letra
	{
		string[i] = toUpper(string[i]);
	}
	i++; 

	for(	; ((string[i]) != '\0') ; i++)
	{
		while ( ((string[i]) != ' ') && ((string[i]) != '\0') )
		{
			string[i] = toLower(string[i]);
			i++;
		}
// Analizo porque freno

		if( ((string[i]) == '\0' ) )	//Analizo si freno porque encontro el terminador
		{
			return;
		}
// Si no freno por el terminador, freno por un caracter de espacio

		i++;
		if( isLower(string[i]) )	//Primera letra de la palabra
		{
			string[i] = toUpper(string[i]);
		}

	}
}


char toUpper (char letra)
{
	if ( letra >= 'a' && letra <= 'z')
	{
		letra= letra - ('a' - 'A');
	}
	return letra;
}

char toLower (char letra)
{
	if( letra >='A' && letra <= 'Z')
	{
		letra= letra + ('a' - 'A');
	}
	return letra;
}

int isUpper (char letra)
{
	if( letra >='A' && letra <= 'Z')
	{
		return 1;
	}
	return 0;
}

int isLower (char letra)
{
	if ( letra >= 'a' && letra <= 'z')
	{
		return 1;
	}
	return 0;

}