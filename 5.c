#include<stdio.h>

int main()
{
    double a,b;
    printf("Enter Temparature in Celcius: ");
    scanf("%lf",&a);
    b=9*a/5 +32;
    printf("The temparature %lf Centigrade in the Fahrenheit Scale is %lf Fahrenheit",a,b);
    return 0;
}