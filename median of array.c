#include<stdio.h>
int main()
{
    int a[1000];
    int i,n,d;
    int sum=0;
    printf("enter number");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    d=sum/n;
    printf("%d",d);
    return 0;
}
