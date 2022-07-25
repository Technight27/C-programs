#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, di; 
    float x1, x2;

    printf("ENTER THE VALUES OF a, b and c\n");
    scanf("%f %f %f", &a ,&b ,&c);

    di = (b)*(b) - 4*(a)*(c);

    if(di>=0)
      {
         x1 = (-b + sqrt(di))/(2*a);
         x2 = (-b - sqrt(di))/(2*a);
         printf("THE ROOTS ARE %g AND %g",x1, x2); 
      }
    else
        printf("THE ROOTS ARE IMAGINARY");

return 0;
}