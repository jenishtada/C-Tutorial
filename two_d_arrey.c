#include <stdio.h>
int main()
{
    int arrey[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("enter the value of [%d][%d] :", i, j);
            scanf("%d", &arrey[i][j]);
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("enter the value of [%d][%d] :", i, j);
        }
        printf("\n");
    }
    printf("------------------------------------\n");

    int arrey2[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("enter the value of [%d][%d] :", i, j);
            scanf("%d", &arrey2[i][j]);
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("enter the value of [%d][%d] :", i, j);
        }
        printf("\n");
    }
        