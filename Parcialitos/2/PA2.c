// PARCIALITO 2

// indicar que imprime el siguiente codigo

#include <stdio.h>

int main (void) 
    {
        int a=5, b=-3;
        while (a++ < 7)     //Deja a con 6
        {
            putchar('a');

            if (b+a >= 4)
                if (a<7)
                {
                    putchar ('b');
                }
            else
            {
                break;
            }
        }
    }