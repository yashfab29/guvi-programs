#include<stdio.h>
void main()
{
    char s[30];
    int n,c,d;
    printf("enter a string");
    gets(s);
    printf("enter a number");
    scanf("%d",&n);
    for(int i=0;i<=n;i++)
    {
        printf("%c",s[i]);
    }

}
