#include <stdio.h>
int main()
{
    // break

    for (int i = 0; i <= 10; i++)
    {
        if (i == 5)
        {
            break;
        }
        else
        {
            printf("%d\n", i);
        }
    }

    printf("-------\n");

    // continue

    for (int i = 0; i <= 10; i++)
    {
        if (i == 5)
        {
            continue;
            ;
        }
        else
        {
            printf("%d\n", i);
        }
    }
}