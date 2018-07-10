#include<stdio.h>
int main()
{
    int n;
    int a=0;
    int temp=n;
    printf("enter a number");
    scanf("%d",&n);
    while(n>0)
    {
        a=a*10+n%10;
        n=n/10;
    }
    if(a==temp)
        printf("palindrome");
    else
        printf("not palindrome");

    return 0;
}
