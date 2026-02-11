
#include <stdio.h>

int main()
{
    int number;
    scanf("%d",&number);
    
    if(number % 5==0){
        printf("Divisible by 5");
    }
    if(number % 5!=0){
        printf("Not divisible by 5");
    }
    
    return 0;
}