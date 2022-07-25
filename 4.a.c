#include<stdio.h>

int main()
{
    double a,b,c;
    printf("Enter A and B respectively: ");
    scanf("%lf %lf",&a,&b);
    c=a;
    a=b;
    b=c;
    printf("Before swapping A=%lf and B=%lf.\n After swapping A=%lf and B=%lf",b,a,a,b);
    
    return 0;
}