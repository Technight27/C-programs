#include <stdio.h>
#include <string.h>

void main()
{
    
    int l, j, i, c = 0;
    char str[100], b[100], tmp;
    
    printf ("\nEnter a string:\t");
    scanf ("%[^\n]s",str);
    
    l = strlen(str);
    
    if (str[0] == 'S' || str[0] == 's')
        c++;
    
    for (i = 0; i < l - 1; i++)
    {
        if (str[i] == ' ' || str[i] == ',' || str[i] == '.' || str[i] == '\0')
        {
            if (str[i+1] == 'S' || str[i+1] == 's')
                c++;
        }
    }
    
    printf ("\nNumber of words starting with S or s in %s is: %d",str,c);
        
}

