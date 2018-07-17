#include<stdio.h>
int main()
{
    int n,a;
    printf("input");
    scanf("%d",&n);
    int temp=n;
    n=n/60;
    a=temp % 60;
    printf("%d %d ",n,a);

}
