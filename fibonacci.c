#include<stdio.h>
int main()
{
    int a=0;int b=1;
    int n,i,sum;
    printf("enter a number");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
       printf(" %d",a);
        sum=a+b;
        a=b;
        b=sum;

    }
    return 0;

}
