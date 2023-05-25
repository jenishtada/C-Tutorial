#include <stdio.h>

int main()
{

    int a;
    float b;

    printf("Enter a value for a : ");
    scanf("%d", &a);

    printf("Enter a value for b : ");
    scanf("%f", &b);

    float c = a + b;

    printf("The sum of a and b is %f", c);
}