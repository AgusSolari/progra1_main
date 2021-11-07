double potencia (double a, int b);


double potencia (double a, int b)
{
    double c =a;
    for ( ; b > 1; b--)
    {
        a=a*c;
    }

	if ( b==0 )
	{
		a=1;
	}
    return a;
}