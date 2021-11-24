//
// Created by agussolari on 17/11/21.
//

#include <stdio.h>
#include <stdlib.h> //Falta incluir la libreria de rand
#include <time.h>

int main(void)
{
	int dado, i;
	for (i=1 ; i<=5 ; ++i)
	{
		srand(time(NULL)+i); //Falta cambiar la semilla por cada tirada de dados que se hace, ya que sino saldria el mismo valor de dado por cada tirada
		dado = rand() %6 +1;
		printf("Dado[%d]: %d\n", i,dado);

	}
	return 0;
}