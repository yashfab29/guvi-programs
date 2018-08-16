#include<stdio.h>
void main()
{
    char str[30];
    int cd=0;int cn=0;int cs=0;int special=0;
    int ch;
    printf("enter the string");
    gets(str);
    int i;
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]>='0' && str[i]<='9')
        {
            cn++;

        }
        else if((str[i]>='a'&& str[i]<='z')||(str[i]>='A'&&str[i]<='Z'))
        {
            cd++;
        }

        else if(str[i]==' ')
            {cs++;}
        else
        {
            special++;
        }

    }
       printf("%d",special);
}
