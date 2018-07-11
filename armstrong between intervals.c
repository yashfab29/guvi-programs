#include<stdio.h>
int main()
{
   int a,b;
   int i,count=0;
   printf("enter two integers");
   scanf("%d%d",&a,&b);
   for(i=++a;i<b;i++)
   {
       int c=check(i);
       if(c==1)
        printf("%d ",i);
   }
}

    int check(int p)
    {
        int a=p,sum=0,d,count=0;
        while(p!=0)
    {
        p=p/10;
        ++count;
    }
    p=a;
    while(a!=0)
    {
        d=a%10;
        sum=sum+pow(d,count);
        a=a/10;
    }
    if(sum==p){
        return 1;
    }
    else
        return 0;

    }
