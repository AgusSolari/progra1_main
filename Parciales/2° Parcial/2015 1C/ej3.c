//
// Created by agussolari on 13/11/21.
//

#include <stdio.h>
int main()
{
	void *vp;
	char ch='1', *cp="JACK";
	int j=0x4142;

	vp=&ch; // Define el puntero a void apuntando a ch = '1'
	printf("%c - ", *(char*)vp); // Imprime: '1'

	vp=&j; // El puntero vp apunta a j = 0x4142
	printf("%c - ", *(int*)vp); //Imprime: 'B'

	/*
	 *  jL [0x42]
	 *  jH [0x41]
	 */

	vp=cp;
	printf("%s\n", (char*)vp+2);

	return 0;
}