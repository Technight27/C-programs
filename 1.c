#include<stdio.h>

int main()
{
    double a,b,c;
    printf("Enter your two numbers: ");
    scanf("%lf %lf",&a,&b);
    c=a+b;
    printf("%lf+%lf is %lf",a,b,c);
    return 0;
}