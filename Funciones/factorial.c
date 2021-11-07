
unsigned long factorial (int n);


unsigned long factorial (int n)
{
	unsigned long rta = n;
	for( int i= (n-1) ; i>0 ; i--)
	{
		rta= rta*i;
	}
	return rta;

}