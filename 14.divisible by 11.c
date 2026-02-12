
#include <stdio.h>

int main()
{
   int num;
   scanf("%d",&num);
   
   if(num % 11 == 0){
       printf("Divisible by 11",num);
   }
   else{
       printf("not divisible by 11",num);
   }

    return 0;
}