#include <string.h>
#include <stdio.h>
#include <ctype.h>

void main()
{
    
    int i, l, t1, t2;
    char str[100];
    
    printf ("\nEnter a string:\t");
    scanf ("%[^\n]s",str);
    
    l = strlen(str);
    
    printf ("\nNew string is:\t");
    for (i = 0; i < l; i++)
    {
        t1 = str[i];
        
        if ((t1 > 64 && t1 <= 88) || (t1 > 96 && t1 <= 120))
            t2 = t1 + 2;
        else if (t1 == 32)
            t2 = t1;
        else
            t2 = t1 - 24;
            
        printf ("%c",t2);
    }
    
}
