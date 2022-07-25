#include <stdio.h>
#include <string.h>
void delete (char *str, int pos)
{
    
    int i, l;
    char a[100];
    
    l = strlen(str);
    
    for (i = pos - 1; i < l; i++)
    {
        str[i] = str[i + 1];
    }
    
}

void main ()
{
    
    int i, l;
    char str[100];
    
    printf ("\nEnter the string:\t");
    scanf ("%[^\n]s",str);
    
    l = strlen(str);
    
    for (i = 0; i < l; i++)
    {
        if (str[i] == str[i+1])
        {
            delete (str, i+1);
            i--;
            l--;
        }
    }
    
    printf ("\nThe UPDATED STRING is:\n");
    printf ("%s",str);

}

