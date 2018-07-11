#include<stdio.h>
int main()
{
   int a,sum,i;
   printf("enter a number");
   scanf("%d",&a);
    for(i=1;i<=5;i++)
   {
       sum=i*a;
       printf("%d ",sum);
   }
   return 0;
}
