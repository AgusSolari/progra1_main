#include <stdio.h>

extern int x; //Variable automatica, global, de enlace externo
static int fun2(void);

int main(void)
{
	fun2();
	
	return 0;
}