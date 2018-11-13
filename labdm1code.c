#include <stdio.h>

int main ()
{  
   int x,y,z;
   printf ("enter x \n");
   scanf ("%i",&x);
   printf ("enter y \n");
   scanf ("%i",&y);
   printf ("enter z \n");
   scanf ("%i",&z);
   if (((x==0) || (x==1)) && ((y==0) || (y==1)) && ((z==0 || z==1)))
   {
   if ((x==0)&&(y==0)&&(z==0))
   {
   printf("true\n");
   }
   else if ((x==0)&&(y==0)&&(z==1))
   {
  printf("false\n");
   }
  else if ((x==0)&&(y==1)&&(z==0))
   {
  printf("true\n");
   }
   else if ((x==0)&&(y==1)&&(z==1))
   {
  printf("true\n");
   }
    else if ((x==1)&&(y==1)&&(z==0))
   {
  printf("false\n");
   }
    else if ((x==1)&&(y==0)&&(z==1))
   {
  printf("true\n");
   }
    else if ((x==1)&&(y==0)&&(z==0))
   {
  printf("true\n");
   } else if ((x==1)&&(y==1)&&(z==1))
   {
  printf("true\n");
   }
 } 
 else 
 {
 printf("Error");
 }
 return 0;
}
