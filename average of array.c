#include<stdio.h>
int main()
{
    int a[5];
    int i,n,max,min;
    int sum=0;
    printf("enter a number");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];

    }
        sum=sum/n;

        printf(" %d",sum);
    return 0;

}
