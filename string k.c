#include<stdio.h>
void main()
{
    char str[20];
    gets(str);
    int n,i;
    printf("enter a number");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("%s\n",str);
    }

}
