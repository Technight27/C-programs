#include<stdio.h>

int main()
{
    double a,b,c,d,e;
    printf("Enter three numbers: ");
    scanf("%lf %lf %lf",&a,&b,&c);
    d=a+b+c;
    e=d/3;
    printf("The sum and avarage of the three numbers %lf,%lf,%lf are respectively %lf and %lf",a,b,c,d,e);
    return 0;
}