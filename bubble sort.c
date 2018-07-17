#include<stdio.h>
int main()
{
    int a[1000];
    int i,n;
    printf("enter number of elements");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    bubble_sort(a,n);
}
    void bubble_sort(int a[],int n)
    {
        int r,temp,i;
        for(r=1;r<n;r++)
        {
              for(i=0;i<n-r;i++)
                if(a[i]>a[i+1])
              {
                  temp=a[i];
                  a[i]=a[i+1];
                  a[i+1]=temp;
              }
        }
        for(i=0;i<n;i++)
        {
            printf("%d ",a[i]);
        }


    }
