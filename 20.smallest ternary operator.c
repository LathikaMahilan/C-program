
#include <stdio.h>

int main()
{
   int a,b;
   scanf("%d %d",&a,&b);
   
   if(a>b){
       printf("%d is smallest",b);
   }
   else{
       printf("%d is greatest",a);
   }
   return 0;
}