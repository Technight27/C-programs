#include<stdio.h>
#include<conio.h>
int main()
{
    int x = 0,y = 0;
     int rows = 0;
    printf("Enter the number of rows = ");
    scanf("%d",&rows);
    for(x=1; x<=rows; ++x)
    {
      
        for(y=x; y<rows; ++y)
        {
            printf(" ");
        }
       
        for(y=1; y<=x; ++y)
        {
            printf("%d",y);
        }
        
        printf("\n");
    }
    return 0;
}