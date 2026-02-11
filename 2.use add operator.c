
#include <stdio.h>

int main()
{
   int a,b,c,d,e,f;
   a=10;
   b=5;
   c=3;
   d=7;
   e=0;
   f=4;
   
   int x=a+=b;
   int y=c+=d;
   int z=e+=f;
  
  printf("%d",x);
  printf("\n%d",y);
  printf("\n%d",z);
   
   
   return 0;
   
}