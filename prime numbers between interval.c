#include<stdio.h>
int main()
{
   int a,b;
   int i;
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
        int f=0,j;
        for(j=2;j<p;j++)
        {
            if(p%j==0)
            {f=1;
            break;
            }
        }
        if(f==0)
            return 1;
        else
            return 0;
    }

