
#include<stdio.h>
int main()
{
    int n,i,j,flag1,flag2,x,a;
printf("Enter number : ");
 scanf("%d",&n);
 for(j=2;j<=n/2;j++)
 {	
	flag1=flag2=1; 
for(i=2;i<=j/2;i++)
	{	
	if(j%i==0)
		{flag1=0;
		break;
		}
		
	}
	if (flag1==1)
	{
	a=j;
	x=n-a;
	
	for (i=2;i<=x/2;i++)
	{
		if (x%i==0)
		{
			flag2=0;
			break;
		}
	}
	
	
	if(flag2==1)
	{	
	printf ("%d = %d+%d\n" ,n,a,x);
	
	}
	}
}
return 0;
}