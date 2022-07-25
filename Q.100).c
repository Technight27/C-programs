#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int delimeter(char c) 
{
    while(1)
    {
    	if( c == ' ' || c == ',' || c == ';'|| c == '.'|| c == '\0') 
    	    return 1;
    	else 
    	    return 0;
	}
}

int palin(char* str) 
{
    int l;
    l = strlen(str);

    char* rev = malloc(sizeof(char) * (l + 1));

    for (int i = 0; i < l; i++) 
    {
        rev[l - i - 1] = str[i];
    }
    rev[l] = '\0';

    if (strcmp(str, rev) == 0)
        return 1;
}


void main() 
{
    
    char str[100], word[100];
    int l, last_word = -1, pwords = 0;
    
    printf("\nEnter a string:\t");
    scanf("%[^\n]s", str);

    word[100] = "\0";
    l = strlen(str);

    for (int i = 0; ; i++) 
    {
        if (delimeter(str[i])) 
        {
            if (i - last_word > 1) 
            {
                int j = 0;
                for ( ; j < i - last_word - 1; j++) 
                {
                    word[j] = str[last_word + 1 + j];
                }
                word[j] = '\0';
                
                if (palin(word) == 1) 
                    pwords++;
                    
                last_word = i;
            }
            if (str[i] == '\0') 
                break;
        }
    }
    printf("Number of palindrome words: %d\n", pwords);

}
