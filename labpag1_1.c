#include <stdio.h>
#include <math.h>

int main ()
{
   double a,b,c;
   
   printf("input a=");
   scanf("%lf", &a);
   
   printf("input b=");
   scanf("%lf", &b);
   
   c=(pow((a-b),3)-(pow(a,3)-3*a*b*b))/(pow(b,3)-3*a*a*b);
   
   printf("result=,%lf\n", c);
    
   return 0;
}
