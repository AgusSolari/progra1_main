#include <stdio.h>

int cantrenglones (void);

int main (void)

{

printf(" %d \n", cantrenglones() );

return 0;

}







int cantrenglones (void)

{

int contador=0;

int c = getchar();//Recibo el string de texto desde el stdin

while( (c) != '\00' ) //Pongo la condicion de cunado termine el texto

{

if( c == '\n' )

{

contador++;//Aumento el contador solo si enconto un salto de linea

}

}

return contador;

}