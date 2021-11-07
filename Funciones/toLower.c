char toLower (char letra);
int isLower (char letra);



char toLower (char letra)
{
	if( letra >='A' && letra <= 'Z')
	{
		letra= letra + ('a' - 'A');
	}
	return letra;
}

int isLower (char letra)
{
	if ( letra >= 'a' && letra <= 'z')
	{
		return 1;
	}
	return 0;

}