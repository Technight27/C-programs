#include <stdio.h>
#include <string.h>
void main()
{
    
    char str[100], pat[100];
    int plen;
    
    printf("\nEnter a string:\t");
    scanf("%[^\n]s", str);

    printf("\nEnter a pattern:\t");
    scanf("\n%[^\n]", pat);
    
    plen = strlen(pat);

    char* till = str;
    
    printf("\nReduced string:\t");
    for (char* find = strstr(str, pat); find != 0; find = strstr(find+1, pat)) 
    {
        while (till != find) 
        {
            printf("%c", *(till++));
        }
        till += plen;
    }
    while (*till != '\0') 
    {
        printf("%c", *(till++));
    }
    
    printf("\n");

}

