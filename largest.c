#include<stdio.h>
int main()
{
    float a,b,c;
    printf("enter three numbers");
    scanf("%f %f %f",&a,&b,&c);
    if(a>=b&&a>=c)
        printf("\n %f is largest",a);
    else if(b>=a&&b>=c)
        printf("\n %f is largest",b);
    else
        printf("\n %f is largest",c);
    return 0;
}
