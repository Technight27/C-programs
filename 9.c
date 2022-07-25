#include<stdio.h>
int main()
    {int a,b,c;
    printf ("\n Enter The Three Numbers : ");
    scanf ("%d%d%d",&a,&b,&c);
    	if (a>b&&a>c)
    printf("\n Largest Number : %d",a);
    	 else
    	 {if
    	 (b>c&&b>a)
		 printf ("\n Largest Number : %d",b);
		 else
		 printf ("\n Largest Number : %d",c);
		 }
		 
		 
		 if (a<b&&a<c)
    printf("\n Smallest Number : %d",a);
    	 else
    	 {if
    	 (b<c&&b<a)
		 printf ("\n Smallest Number : %d",b);
		 else
		 printf ("\n Smallest Number : %d",c);
		 }
		 
    
    return 0;}