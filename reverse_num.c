#include<stdio.h>
int main()
{
    int num;

 printf("enter a num :");
 scanf("%d",&num);

 while (num!=0)
 {
   int r = num % 10;
   printf("%d",r);
   num/=10;
 }
 
}