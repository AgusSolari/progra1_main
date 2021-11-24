//
// Created by agussolari on 13/11/21.
//

#include <stdlib.h>
#include <stdio.h>

int asc ( const void *p1, const void *p2);
void printArr ( void *arr, int n);

int arr [] ={10,9,8,1,2,3,5};

int main(void)
{
	int n = sizeof(arr)/sizeof(arr[0]) -1;
	printArr(arr, n);

	printf("\n");

	qsort(arr, n, sizeof(arr[0]), asc);
	printArr(arr, n);



	return 0;
}

int asc ( const void *p1, const void *p2)
{
	if ( *(int*)p1 < *(int*)p2 )
		return -1;

	if (*(int*)p1 == *(int*)p2)
		return 0;

	if (*(int*)p1 > *(int*)p2)
		return 1;
}

void printArr ( void *p, int n)
{
	for (int i = 0; i < n; ++i)
	{

		printf("%d - ", ((int*)p)[i]);

	}
}