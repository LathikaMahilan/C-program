#include <stdio.h>

int main() {
    int n,i;
    int voltage;
    int min;
    int lowcount=0;

    scanf("%d",&n);
    scanf("%d",&min);
    if(min < 210){
        lowcount++;
    }
    
    for(i=1;i<n;i++){
        scanf("%d",&voltage);
       
        
    if(voltage < min){
        min = voltage;
    }
    if(voltage<210){
        lowcount++;
    }    
    }        
    printf("Minimum Voltage: %d\n",min);
    printf("Low Voltage Events: %d\n",lowcount);
    
    
    return 0;
}