#include <stdio.h>

int main()
{
    float n,ni;
    printf("Enter a number");
    scanf("%f",&n);
    if(n>0)
    printf("The absolute value of %f is %f",n,n);
    else
    { ni=-n;
    printf("The absolute value of %f is %f",n,n);
    }

    return 0;
}
