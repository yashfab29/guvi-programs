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
    min=a[i];
    for(i=1;i<n;i++)
    {
        if(min>a[i])
            min=a[i];
    }
    printf("%d",min);
    return 0;
}
