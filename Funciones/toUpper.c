char toUpper (char letra);
int isUpper (char letra);



char toUpper (char letra)
{
	if ( letra >= 'a' && letra <= 'z')
	{
		letra= letra - ('a' - 'A');
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