/* EJERICICIO 8
¿Que tiene de malo este programa?


#include <stdio.h> 

void set(int *x);


int main(void) 
{ 
    int *x; 
    set(x); 
    printf("%d\n", *x); 
    return 0; 
}

void set(int *x) // *x= x
{ 
    *x = 10; 
} 

// TODO  lo que esta mal de este programa es que nunca se definio la variable x, 
//en este caso esta tirando un "segmentation fault" ya que x = 0x00 y se le intento
//  cargar un valor de 10, lo cual el sistema no permitio y lanzo el error
 */
