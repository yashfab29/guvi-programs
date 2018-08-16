#include<stdio.h>
void main()
{
    char str[30];
    int count =1;
    printf("enter the string");
    gets(str);
    int i;
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]==' ')
        {
         ++count;
        }
    }
    printf("%d",count);
}
