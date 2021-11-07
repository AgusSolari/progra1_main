#include <stdio.h>

int sensor (void);

int main (void)
{
    for (int i = 0 ; i < 10 ; i++)
    {
        int var, estado;
        var = sensor();

        switch (var)
        {
            case 1 : estado = 1 ; break;
            case 0 : estado = 0; break;
        }
        printf("Estado: %d\n", estado);
    }


    return 0;
}





int sensor (void)
{
    int c = getchar();
    while ( (c) != '\n' )
    {
        if (c == '1')
        {
        return 1;
        }
    return 0;
    }
}