#include <stdio.h>
#include "fun2.h"
#include "fun1.h"

extern int x;

int fun2(void)
{
    printf("Fun2: %d\n", x);
    printf("Fun2: %d\n", CONS);
    return 0;
}