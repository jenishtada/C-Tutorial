#include<stdio.h>
int main()
{
    int num;
    int t1=0, t2=1;
    int sum;

    printf("enter the number : ");
    scanf("%d ,",&num);

    for (int i=1; i<=num; i++)
    {
     printf("%d,",t1);
     sum=t1+t2;
     t1=t2;
     t2=sum;
    }

}