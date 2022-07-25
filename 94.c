#include <stdio.h>
#include <string.h>
 
void main()
{
    int sum = 0, i, len;
    char string1[100];
 
    printf("Enter the string : ");
    scanf("%[^\n]s", string1);
        len = strlen(string1);
    for (i = 0; i < len; i++)
    {
        sum = sum + string1[i];
    }
    printf("\nSum of all characters : %d ",sum);
}