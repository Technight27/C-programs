#include<stdio.h>

int main()
{
    double a,b;
    printf("Enter A and B respectively: ");
    scanf("%lf %lf",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("Before swapping A=%lf and B=%lf.\n After swapping A=%lf and B=%lf",b,a,a,b);
    
    return 0;
}