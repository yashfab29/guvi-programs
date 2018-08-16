#include<stdio.h>
void main()
{
    char str1[20];
    printf("enter first string");
    gets(str1);
    char str2[20];
     printf("enter second string");
    gets(str2);
    int i=0;
    while(str1[i]!='\0')
    {
        i++;
    }
    int j=0;
    while(str2[j]!='\0')
    {
        str1[i]=str2[j];
        i++;
        j++;
    }
    str1[i]='\0';
    printf("%s",str1);
}
