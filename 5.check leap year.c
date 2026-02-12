
#include <stdio.h>

int main()
{
    int num;
    scanf("%d",&num);
    
    if (num % 4 ==0){
        printf("leap year",num);
    }
    else{
        printf("not leap year",num);
    }

    return 0;
}