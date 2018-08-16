#include<stdio.h>
int main()
{
    int a[5];
    int i,n,max,min;
    printf("enter a number");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    max=a[0],min=a[0];
    for(i=0;i<n;i++)
    {
    if(a[i]>max)
        max=a[i];
    if(a[i]<min)
        min=a[i];
    }
    printf("max element is %d",max);
    printf("min element is %d",min);
    return 0;
}
