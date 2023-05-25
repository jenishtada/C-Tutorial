#include <stdio.h>
int main()
{
    int count = 1;

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf(" %d", i);
            count++;
        }
        printf("\n");
    }
}

/*

*
**
***
****     printf(" *");
*****
******

1
22
333      printf(" %d",i);
4444
55555

1
12
123      printf(" %d",j);
1234
12345

*/