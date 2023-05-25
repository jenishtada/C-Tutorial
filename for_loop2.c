#include<stdio.h>
int main()
{
    int a=10;  
    int sum = 0;

    for(a=1; a<=10; a++)
    {
        printf("%d\n",a);
        sum+=a;  // sum = sum + a;

    }
     printf("sum= %d ",sum);
}