
#include <stdio.h>

int main()
{
    int num;
    scanf("%d",&num);
    
    if(num >= 100 && num <= 999){
        printf("three-digit number");
    }
    else{
        printf("invalid number");
    }
  
    return 0;
}