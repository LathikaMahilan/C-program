
#include <stdio.h>

int main(){
    int day;
    scanf("%d",&day);
    
    switch(day){
        case 1:
        printf("monday");
        break;
        
        case 2:
        printf("Tuesday");
        break;
        
        case 3:
        printf("Wednesday");
        break;
        
        case 4:
        printf("Thursday");
        break;
        
        case 5:
        printf("Friday");
        break;
        
        case 6:
        printf("Saturday");
        break;
        
        case 7:
        printf("sunday");
    default:
        printf("Invalid day, Enter the number between 1 - 7");
    }
    return 0;
}
