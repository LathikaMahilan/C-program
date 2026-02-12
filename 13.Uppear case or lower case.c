
#include <stdio.h>

int main()
{
    char ch;
    scanf("%c",&ch);
    
    if(ch >= 65 && ch <=90){
        printf("Uppercase letter");
    }
    else{
        printf("lowercase");
    }
    return 0;
}