#include <stdio.h>

int main() {
   int num,limit;
   int sum =0;
   scanf("%d %d",&num,&limit);
 
   for(int i=1; num * i<= limit; i++){
    sum=sum + (num * i);
   }
   printf("%d",sum);

    return 0;
}