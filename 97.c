#include<stdio.h>
void main()
{
    char a[30];
    int i,j,t,f=0;
    printf("Enter the string: ");
    gets(a);
    for(i=0;a[i]!='\0';i++);
    t=i-1;
    for(j=0;j<i/2;j++)
    {
        if(a[j]!=a[t]){
            f=1;
            break;
        }
        t--;
    }
    if (f==0)
        printf("Palindrome word");
    else
        printf("Not a palindrome word");
}