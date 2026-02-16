
#include <stdio.h>

int main()
{
   int i,n,sum=0;
   scanf("%d",&n);
   
   for(int i=1;i<=n/2;i++){
       if(n%i==0){
           sum=sum+i;
           
       }
   }
   if(sum==n){
       printf("yes");
   }
   else{
       printf("no");
   }

    return 0;
}