#include <stdio.h>
#include <string.h>
void main() 
{
    
    char str[100], pat[100];
    int c = 0;
    
    printf("Enter a string:\t");
    scanf("%[^\n]s", str);

    printf("Enter a pattern: ");
    scanf("\n%[^\n]", pat);

    for (char* i = strstr(str, pat); i != 0; i = strstr(i+1, pat)) 
    {
        c++;
    }
    printf("Pattern count: %d", c);

}

