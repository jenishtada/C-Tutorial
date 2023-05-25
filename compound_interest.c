#include <stdio.h>
#include <math.h>

int main()
{
    int principle;
    float rate;
    int num_of_year;

    printf("enter principle(amount):");
    scanf("%d", &principle);

    printf("enter time: ");
    scanf("%f", &rate);

    printf("enter rate:");
    scanf("%d", &num_of_year);

    float ci;
    float first = 1 + rate / 100;

    ci = principle * (pow(first, num_of_year) - 1);

    printf("compound intrest is %f", ci);

    return 0;
}