#include <stdio.h>
#include <string.h>

void main()
{

    int l;
    char str[100];
    
    printf ("\nEnter the name:\t");
    scanf ("%[^\n]s",str);
    
    l = strlen (str);
   
    int c = 0, i, k;

    
    for (i = 0; i < l; i++)
    {
        if (str[i] == ' ')
        {
            printf ("%c. ",str[i-c]);
            c = -1;
            k = i+1;
        }
        
        c++;
    }
    
    printf ("%c",str[k]);

}