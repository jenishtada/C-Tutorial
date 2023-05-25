#include<stdio.h>
int main()
{
    int n;
    int i=1;

    printf("enter the value for table:");
    scanf("%d",&n);

    table:

    printf("%d x %d = %d\n",n,i,n*i);
    i++;

    if(i<=10)
    {
        goto table;
    }
}