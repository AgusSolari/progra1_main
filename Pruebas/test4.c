#include <stdio.h>

int a = 3;

void hola (void)
{
    int x;
    printf("%d\n", sizeof(x));
}

int main(void)

{
    hola();
    return 0;
}
