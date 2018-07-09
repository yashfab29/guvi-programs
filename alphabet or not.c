#include<stdio.h.>
void main()
{
    char ch;
    printf("enter character");
    scanf("%c",&ch);
    if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z'))
        printf("\n %c is a alphabet",ch);
    else
        printf("NO");
}
