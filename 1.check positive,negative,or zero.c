
#include <stdio.h>

int main()
{
    int number;
    scanf("%d",&number);
    
    if(number>0){
        printf("positive number");
    }
    
    if(number<0){
        printf("negative number");
    }
    return 0;
}