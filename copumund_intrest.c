#include <stdio.h>
#include <math.h>

int main()
{

    int principle;
    float rate;
    int num_of_year;

    printf("Enter a principle : ");
    scanf("%d", &principle);

    printf("Enter a rate of interst : ");
    scanf("%f", &rate);

    printf("Enter a number of year : ");
    scanf("%d", &num_of_year);

    float ci;

    float first = 1 + rate / 100;

    ci = principle * (pow(first, num_of_year) - 1);

    printf("Your compound interst is %f", ci);
}