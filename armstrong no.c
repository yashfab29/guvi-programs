#include<stdio.h>
#include<math.h>
int main()
{
    int a,d,b;
    int sum=0,count=0;
    printf("enter a number");
    scanf("%d",&a);
    b=a;
    while(a!=0)
    {
        a=a/10;
        ++count;
    }
    a=b;
    while(a!=0)
    {
        d=a%10;
        sum=sum+pow(d,count);
        a=a/10;
    }
    if(sum==b)
        printf("%d is an armstrong no",b);
    else
        printf("%d is not an armstrong no",b);

    return 0;

}
