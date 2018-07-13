#include<stdio.h>
int main()
{
    int i,n;
    long fact=1;
    printf("enter a no");
    scanf("%d",&n);
    if(n==0)
        printf("error");
    else
    {
        for(i=1;i<=n;i++)
            fact*=i;
        printf("factorial of %d=%ld\n",n,fact);
    }

}
