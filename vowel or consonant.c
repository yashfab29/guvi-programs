#include<stdio.h>
void main()
{
    char ch;
    printf("enter any character");
    scanf("%c",&ch);
    if((ch>='a'&& ch<='z')||(ch>='A'&&ch<='Z'))
    {
       if(ch=='a'||ch=='A'||ch=='e'||ch=='E'||ch=='i'||ch=='I'||ch=='o'||ch=='O'||ch=='u'||ch=='U')
        printf("\n %c is vowel",ch);
    else
        printf("\n %c is consonant",ch);
    }
    else
    printf("\n %c is invalid");

}
