#include<stdio.h>

int main()
{
    int even_sum = 0;
    int odd_sum = 0;

    for(int i=1; i<=20; i++)
    {

    if (i%2==0)
      {
        printf("%d is even number\n",i);
        even_sum+=i;
      }
    else
      {
         printf("%d is odd number\n",i);
         odd_sum+=i;
      }
    }
    printf("sum of even num. is %d\n",even_sum);
    printf("sum of odd num. is %d\n",odd_sum);
}
