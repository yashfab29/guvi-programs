#include<stdio.h>
void main()
{
    char str1[30];
    char str2[30];
    int i;
    printf("enter two strings");
    gets(str1);
    gets(str2);
    for(i=0;str1[i]==str2[i]&&str1[i]=='\0';i++);
    {
        if(str1[i]<str2[i])
        {
            printf("string 2 is large");
        }
        else if(str1[i]>str2[i])
        {
             printf("string 1 is large");
        }
        else
        {
            printf("strings are equal");
        }
    }
}
