#include <stdio.h>
#include <stdlib.h>

int x_strlen(char* str) 
{
    int c = 0;
    for (int i = 0; str[i] != '\0'; i++) 
    {
        c++;
    }
    return c;
}

char* x_strcat (char* str1, char* str2) 
{
    int str1_l = x_strlen(str1);
    int str2_l = x_strlen(str2);
    
    char* concat = malloc(sizeof(char)
                   * (str1_l + str2_l + 1));
                   
    for (int i = 0; i < str1_l; i++) 
    {
        concat[i] = str1[i];
    }
    for (int i = 0; i < str2_l; i++) {
        concat[str1_l + i] = str2[i];
    }
    
    concat[str1_l + str2_l] = '\0';

    return concat;
}

char* x_strrev(char* str) {
    int str_l = x_strlen(str);

    char* rev = malloc(sizeof(char) * (str_l + 1));

    for (int i = 0; i < str_l; i++) 
    {
        rev[str_l - i - 1] = str[i];
    }
    
    rev[str_l] = '\0';

    return rev;
}

void x_strcpy(char* src, char* dest) 
{
    while (*src != '\0') {
        *(dest++) = *(src++);
    }
    *dest = '\0';
}

int x_strcmp(char* str1, char* str2) 
{
    while (*str1 != '\0' && *str2 != '\0') 
    {
        if (*(str1++) != *(str2++)) 
        {
            return *str1 - *str2;
        }
    }
    return *str1 - *str2;
}

int x_strcmpi(char* str1, char* str2) 
{
    int i = 0;
    while (str1[i] != '\0' && str2[i] != '\0') 
    {
        if ((str1[i] != str2[i]) && ((('a' <= str1[i] && str1[i] <= 'z' && 'A' <= str2[i] && str2[i] <= 'Z') && str1[i] - 'a' != str2[i] - 'A') || ((('A' <= str1[i] && str1[i] <= 'Z' && 'a' <= str2[i] && str2[i] <= 'z') && str1[i] - 'A' != str2[i] - 'a')))) 
            return str1[i] - str2[i];
        i++;
    }
    return str1[i] - str2[i];
}

int main() 
{
    char* str1 = "My name is";
    char* str2 = " Arka";
    char* str3 = malloc(sizeof(char) * 50);

    printf("%d\n%s\n%s\n", x_strlen(str1), x_strcat(str1, str2), x_strrev(str1));

    x_strcpy(str1, str3);
    
    printf("%s\n%d\n%d\n", str3, x_strcmp("abc", "abc"), x_strcmp("abc", "AbC"));

    printf("%d\n%d\n", x_strcmpi("abc", "AbC"), x_strcmpi("abcd", "AbC"));
    
    return 0;
}
