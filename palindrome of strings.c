#include<stdio.h>
#include<string.h>
void main()
{
    char s[30],b[30];
    int a,j=0;int f=0;
    printf("enter a string");
    gets(s);
    a=strlen(s);
    for(int i=a-1;i>=0;i--)
    {
        b[j]=s[i];
        j++;
    }
    for(int i=0;i<a;i++)
    {
     if(s[i]!=b[i])
        {
            f=1;
             break;

        }
    }
    if(f==0)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }

}
