#include <stdio.h>
#include <string.h>

void main()
{
    
    int l, j, i, k = 0, c = 0;
    char str[100], b[100], tmp;
    
    printf ("\nEnter a string:\t");
    scanf ("%[^\n]s",str);
    
    l = strlen(str);
    
    for (i = 0; i < l - 1; i++)
    {
        if (str[i+1] != ' ' || str[i+1] != ',' || str[i+1] != '.' || str[i+1] != '\0') 
        {
            if (str[i+1] == ' ' || str[i+1] == ',' || str[i+1] == '.' || str[i+1] == '\0')
                k++;
        }
    }
    
    printf ("\nNumber of words present in %s is: %d",str,k);
        
}

