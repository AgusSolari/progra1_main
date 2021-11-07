#include <stdio.h>
#define ISLETTER(ch)   (((ch > 'A') && (ch < 'Z') ) || ( (ch > 'a') && (ch < 'z') ))

int main (void)
{

    char letter = 'x';
    printf("La letra es: %c \n", letter);

    switch(ISLETTER(letter))
    {
        case 1: 
            printf("Es una letra \n");
            break;

        case 0: 
            printf("No es una letra \n");
            break;

        default:
            printf("Error \n");
            break;
    }


}