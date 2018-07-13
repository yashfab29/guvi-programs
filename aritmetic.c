#include<stdio.h>
int main()
{
    int n,a,d;
    int sum=0;
    printf("entr a n d");
    scanf("%d%d%d",&a,&n,&d);
    sum=n/2*(2*a+(n-1)*d);
    printf("%d",sum);
}
