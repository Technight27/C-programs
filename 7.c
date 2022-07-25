#include <stdio.h>
#include <ctype.h>

int main()
{
    char c,p;
    printf("enter a character\t");
    scanf("%c",&c);
    if(islower(c))
    {
        p=toupper(c);
    printf("The character is %c",p);
    }
    else
    {
       p=tolower(c);
    printf("The character is %c",p);
    }

    return 0;
}
