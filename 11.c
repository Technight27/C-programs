#include<stdio.h>
#include<math.h>
int main()
{
	int call;
	float amnt;
	printf("Enter number of calls :\t");
	scanf("%d",&call);
	if(call<=100)
	amnt=0.20*call;
	if(call>100 && call<=200)
	amnt=20+(call-100)*0.30;
	if(call>200)
	amnt=50+0.5*(call-200);
	printf("\n Bill = Rs %.2f for number of calls = %d",amnt+250,call);
	
	return 0;
}