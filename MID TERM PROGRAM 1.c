# include<stdio.h>
int main()
{
  char first_name[30],middle_name[30],second_mid_name[30],last_name[30];
  int k;
  printf("ENTER YOUR FULL NAME(first middle last):\n");
  scanf("%s %s %s",&first_name[0],&middle_name[0],&last_name[0]);
  printf("Do you have another mid name?(for yes-1/ for no-2)");
  scanf("%d",&k);
  if(k==1)
 { printf("Please enter your second mid name: ");
  scanf("%s",&second_mid_name[0]);
  printf("Abrreviated name:%c.%c.%c.%s\n",first_name[0],middle_name[0],second_mid_name[0],last_name);
 }
  else
  printf("Abrreviated name:%c.%c.%s\n",first_name[0],middle_name[0],last_name);
 
  return 0;
}