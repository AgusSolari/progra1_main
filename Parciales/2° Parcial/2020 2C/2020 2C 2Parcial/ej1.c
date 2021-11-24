//
// EJERCICIO 1
// Escribir una funcion bsort que ordena los elementos de un arreglo mediante el metodo
// de burbujeo
// El prototipo de la funcion debe de ser el mismo que el de la funcion qsort


#include <stdio.h>
#include <stddef.h>

void bsort (void *base, size_t num, size_t size, int (*comparar) (const void*, const void *));
void swap (void *p1, void *p2);
int compararint (const void *p1, const void *p2);


int main (void)
{
	int arr[]= {1,3,2,6,5,6,9};

	for (int i = 0; i < 7; ++i)
	{
		printf("%d - ", arr[i]);
	}
	bsort(arr, 7, sizeof(int), compararint);
	printf("\n");

	for (int i = 0; i < 7; ++i)
	{
		printf("%d - ", arr[i]);
	}




	return 0;
}



void bsort (void *base, size_t num, size_t size, int (*comparar) (const void*, const void *))
{
	int j = 0;
	for ( int i=0 ; i < num - j ; i++)
	{
		if(comparar(&base[i] , &base[i+1]) > 0)
		{
			swap( &base[i], &base[i+1]);
		}
		else if(comparar(&base[i] , &base[i+1]) < 0)
		{
			swap( &base[i+1], &base[i]);

		}
		else if( comparar(&base[i] , &base[i+1]) == 0)
		{
			//No hace nada
		}
	j++;

	}


}
void swap (void *p1, void *p2)
{
	void *aux;
	*(int*)aux = *(int*)p1;
	*(int*)p1 = *(int*)p2;
	*(int*)p2= *(int*)aux;

}

int compararint (const void *p1, const void *p2)
{
	if( *(int*)p1 < *(int*)p2)
		return -1;

	if( *(int*)p1 == *(int*)p2)
		return 0;

	if( *(int*)p1 > *(int*)p2)
		return 1;

}

