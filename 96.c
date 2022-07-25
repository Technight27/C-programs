#include <stdio.h>
#include <string.h>
void main()
{
 int i;
 char string[50];
printf("Enter a word\t");
gets(string);
int l=strlen(string);
 for(i=0;i<l;i++)
{        
printf("\n %c",string[i]);    
}    

}    