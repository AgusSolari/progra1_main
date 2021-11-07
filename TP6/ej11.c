#include <stdio.h>
char text[] = "Washing your car to make it rain doesn't work."; 
//void myprint(char *p);

int main (void)
{
    printf("Texto: %s", text);


    return 0;
}


/*
int main(void) 
{     
    char *p = text + 20;	// *p = ' ' (entre to y make )
	myprint(p+5);			// Imprime:   		
    myprint(&p[16]);     
    myprint(p+30);     
    myprint(&text[13]);    
    myprint(text+46);     
    return 0; 
} 

void myprint(char *p) 
{     
    while(*p != ' ' && *p)  
	{
   		putchar(*p++);     
	}       
    putchar('\n'); 
}

it
sn´t
"algo que no se puede determinar"
car
'\n'

*/
