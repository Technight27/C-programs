#include<stdio.h>
#include<string.h>
void main()
{
	char arr[50];
	int n,i,j;
	printf("\nEnter a Name=");
	gets(arr);
	n=strlen(arr);
	printf("\nPrinting signature case'-->\n");
	for(i=0;i<n;i++)
	{
		if(i==0)
			printf("%c. ",arr[i]);
		if(arr[i]==32)
		{
			printf("%c. ",arr[i+1]);
			j=i+1;
		}
	}
	printf("\b\b");
	for(i=j+1;i<n;i++)
		printf("%c",arr[i]);
}