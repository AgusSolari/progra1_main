#include <stdio.h>

double prodescalar ( double *v1 , double *v2);

int main (void)
{
	double v1 [] = {1,2,3};
	double v2 [] = {1,2,3};
	printf("%f", prodescalar(v1,v2) );
	return 0;
}


double prodescalar ( double *v1 , double *v2)
{
//Como ambos tienen el mismo tamaño, busco mediante v1 la cantidad de elementos

	int elsize =0;
	while( (v2[elsize])  != '\00' )
	{
		elsize++;		//Incremento el valor de elsize siempre y cuando en esa posicion dentro de v1 no este el terminador
	}
	printf("ELSIZE: %d\n", elsize);

//Ahora que tengo que contador, realizo el producto de ambos vectores
	double rta= 0;		//defino una variable en donde se va a guardar el resultado del producto	
	for(int i=0 ; i <= elsize ; i++)
	{
		rta =  rta + (v1[i]*v2[i]);
	}

	return rta;
}