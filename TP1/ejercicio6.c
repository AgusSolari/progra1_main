#include <stdio.h>

#define MASK 0x22	//Mascaras para dejar bits

int main (void)
{
	short int porta;
	porta= 0x66;
	
	printf("%d\n", ((porta & MASK)== MASK) || ((porta & (MASK<<1)== 0)));
	return 0;
}