#include <stdio.h>

int main()
{
    int n,r=1;
    printf("Enter a no ");
    scanf("%d",&n);
    int m=n*n;
    int temp=n;
    while(temp>0)
    {
       r=r*10;
       temp=temp/10;
    }
        if(m%r==n)
        printf("Automorphic no");
        else
        printf("Not automorphic no");
    return 0;
}
