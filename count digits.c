#include<stdio.h>
void main()
{
    long long a;
    int count=0;
    printf("enter a number");
    scanf("%lld",&a);
    while(a!=0)
    {
        a=a/10;
        ++count;
    }
    printf("%d",count);
}
