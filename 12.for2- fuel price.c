#include <stdio.h>

int main() {
    int n,price;
    int highest;
    int highdays=0;
    scanf("%d",&n);
    
    for(int i=0;i<n;i++){
        scanf("%d",&price);
        
        if(price > highest){
            highest = price;
        }
    if(price > 100){
        highdays++;
    }
}
    printf("highest price: %d\n",highest);
    printf("high price day: %d\n",highdays);

    return 0;
}
    
