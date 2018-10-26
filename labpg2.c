#include <stdio.h>
#include <math.h>

int main()
{
   float a;
   float S=0;
   int n=0;
   do
   { 
   
   a = 1/pow(2,n) + 1/pow(3,n);
   n++;
   S+=a;
   
   }
   
   while (a >= 0.0001);
   
   printf ("sum is: %f\n", S);
   
   return 0;
}
