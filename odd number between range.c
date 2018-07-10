#include<stdio.h>
int main()
{
    int a,b,i;
    printf("enter two numbers");
    scanf("%d%d",&a,&b);
    for(i=++a;i<b;i++)
    {
        if(i%2==0)
        {
            continue;
        }
        printf("%d",i);
    }

    return 0;
}
