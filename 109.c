 #include <stdio.h>
#include <string.h>
#include <conio.h>
#define isvowel(v) (v=='a' || v=='e' || v=='i' || v=='o' || v=='u')
int main()
{
    char word[80];
char exit;
int length,x,y,z;
    printf("\nTranslating English words to Pig Latin\n\n");
do
{
printf("\nEnter your English word:");

scanf("%s",word);
length = strlen(word);
for(y=0;y<length;y++)
    if(isvowel(word[y]))
 {
    x=y;
 break;
 }
for(;x<length;x++)
printf("%c",word[x]);
for(z=0;z<y;z++)
    printf("%c",word[z]);
 printf("ay");
 printf("\n\nPress ~ to exit\n\nEnter your word:");
 exit=getch();
}
while(exit!='~');
return(0);
}