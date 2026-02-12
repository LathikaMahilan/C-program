
#include <stdio.h>

int main()
{
    int num;
    scanf("%d",&num);
    
    if(num % 3==0 && num % 7==0){
        printf("Multiple of both 3 and 7",num);
    }
    else{
        printf("not multiple of both 3 and 7",num);
    }
    return 0;
}