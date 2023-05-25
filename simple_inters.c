#include <stdio.h>

int main()
{

    int principle = 20000;
    float rate_of_inters = 1.5;
    int no_of_year = 3;

    int I = principle * rate_of_inters * no_of_year / 100;

    printf("Your simple inters is %d", I);

}