#include<stdio.h>
void main()
{
    int n;
    printf("enter any number");
    scanf("%d",&n);
    if(n%2==0)
        printf("number is even");
    else if(n<0)
        printf("number is inalid");
    else
        printf("number is odd");
}
