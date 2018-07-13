#include<stdio.h>
int main()
{
    int a[1000];
    int i,n,min;
    printf("enter number");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("\n%d %d ",a[i],i);
    }
    return 0;
}
