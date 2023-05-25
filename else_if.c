#include <stdio.h>
int main()
{

    int eco;
    int ba;
    int stat;
    int ac;
    int eng;

    printf("enter the marks of eco. =");
    scanf("%d", &eco);

    printf("enter the marks of ba. =");
    scanf("%d", &ba);

    printf("enter the marks of stat. =");
    scanf("%d", &stat);

    printf("enter the marks of ac. =");
    scanf("%d", &ac);

    printf("enter the marks of eng. =");
    scanf("%d", &eng);

    int total = eco + ba + stat + ac + eng;

    printf("The total is %d\n", total);

    float per = total / 5;

    printf("percantage is %.2f\n", per);

    if (per > 90)
    {
        printf("First class");
    }
    else if (per < 90 && per > 80)
    {
        printf("second class");
    }
    else if (per < 80 && per > 70)
    {
        printf("Third class ");
    }
    else
    {
        printf("Need hardwork");
    }
}
