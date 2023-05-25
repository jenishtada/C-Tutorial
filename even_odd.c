#include<stdio.h>

int main()
{

    int value;

    printf("Enter a value : ");
    scanf("%d",&value);

    if (value%2==0)
    {
        printf("The value is even number");
    }
    else
    {
         printf("The value is odd number");
    }
}