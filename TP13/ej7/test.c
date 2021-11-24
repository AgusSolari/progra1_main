//
// Created by agussolari on 17/11/21.
//

#include <stdio.h>
void muestra(void* p);
int main(void) {
	int mat[3][5] = {{0,  1,  2,  3,  4},{-5, -6, -7, -8, -9},{5,  6,  7,  8,  9}};
	int test = ((mat+1) - mat);
	printf("%d", test);

}