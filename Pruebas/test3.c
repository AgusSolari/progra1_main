#include <stdio.h>

#define legajo1 62626
#define nombre1 "Agustin"
#define apellido1 "Solari"
int main (void)
{
    printf ("%-8s  %-8s  %-8s\n","Legajo","Nombre","Apellido");
    printf ("%-8d  %-8s  %-8s\n", legajo1, nombre1, apellido1); 
    return 0;
}