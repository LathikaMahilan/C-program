
#include <stdio.h>

int main()
{
    int Age;
    scanf("%d",&Age);
    
    if(Age>=18){
        printf("Eligible to vote",Age);
    }
    else{
        printf("not eligible for vote",Age);
    }
  
    return 0;
}