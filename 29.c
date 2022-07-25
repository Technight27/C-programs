#include <stdio.h>

int main()
{
    int n,r=0;
    printf("Enter a no ");
    scanf("%d",&n);
    int m=n*n;
    int temp=n;
    while(temp>0)
    {
       int a=temp%10;
       r+=a*a*a;
       temp=temp/10;
    }
        if(r==n)
        printf("Armstrong no");
        else
        printf("Not a armstrong  no");
    return 0;
}