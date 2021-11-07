#include <stdio.h>
int main(void)
{
    int ch;
    do
    {
        ch = getchar();
        if (ch > 'V')
            break;            
        printf("%c", ch);
        
    }
    while (ch < 'N');
    printf("Q");
    return 0;
}