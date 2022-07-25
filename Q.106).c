#include <stdio.h>
#include <string.h>
void main() 
{
    
    char str[100], pat1[100], pat2[100];
    
    printf("\nEnter a string: \t");
    scanf("%[^\n]s", str);

    printf("\nEnter pattern1:\t");
    scanf("\n%[^\n]s", pat1);
    
    int plen = strlen(pat1);

    printf("\nEnter pattern2:\t");
    scanf("\n%[^\n]s", pat2);

    char* till = str;
    
    printf("\nReplaced string:\t");
    for (char* find = strstr(str, pat1); find != 0; find = strstr(find+1, pat1)) 
    {
        while (till != find) 
        {
            printf("%c", *(till++));
        }
        printf("%s", pat2);
        till += plen;
    }
    while (*till != '\0') 
    {
        printf("%c", *(till++));
    }
    printf("\n");
    
}
