#include <stdio.h>
int main(){
int n,b,c;
printf("n = ");
scanf("%i", &n);
for(b = 1; b <=n; b++){
for(c = 1;c <=n-b; c++){
printf(" ");
}
for(c = 1; c <= 2*b-1; c++){
printf("*");


}
printf("\n");
}
for(b = n-1; b >= 1; b--){
for(c = 1;c <=n-b; c++){
printf(" ");
}
for(c = 1; c <= 2*b-1; c++){
printf("*");


}
printf("\n");
}
return 0;
}