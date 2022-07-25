#include <stdio.h>
void main(){
int n,b,c=0;
printf("Enter a no\t");
scanf("%d",&n);
while(n>0)
{
b=n%10;    
c=c*10+b;
n=n/10;
}
printf("Sum of digits is %d",c);
}