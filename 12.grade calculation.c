
#include <stdio.h>

int main()
{
    int marks;
    scanf("%d",&marks);
    
    if(marks >= 75 && marks <= 90){
        printf("Grade B");
    }
    else{
        printf("not grade b");
    }
    return 0;
}