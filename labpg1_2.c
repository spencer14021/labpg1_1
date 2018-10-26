#include <stdio.h>

int main()
{
   int n,m,a,b,c;
   
  printf("input n");
  scanf("%i", &n);
  
  printf("input m");
  scanf("%i", &m);
  
  a=m-++n;
  printf("result=%i\n", a);
  
  b=++m>--n;
  printf("result=%i\n", b);
  
  c=--n<++m;
  printf("result=%i\n", c);
  
  return 0;
  }
