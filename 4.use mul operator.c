
#include <stdio.h>

int main()
{
   int a,b,c,d,e,f;
   a=4;
   b=5;
   c=3;
   d=3;
   e=10;
   f=2;
   
   int x=a*=b;
   int y=c*=d;
   int z=e*=f;
  
  printf("%d",x);
  printf("\n%d",y);
  printf("\n%d",z);
   
   
   return 0;
   
}