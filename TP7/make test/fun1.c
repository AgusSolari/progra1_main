#include <stdio.h>
#include "fun1.h"

extern int x;

int fun1(void)
{
    printf("Fun1: %d\n", x);
    x+=3;
    return 0;
}