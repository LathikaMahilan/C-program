#include <stdio.h>

int main() {
    int totalData, N;
    
    scanf("%d", &totalData);
    scanf("%d", &N);
    
    int usage[N];
    
    for(int i = 0; i < N; i++) {
        scanf("%d", &usage[i]);
    }
    
    int day = 0;
    
    while(day < N && totalData > 0) {
        totalData -= usage[day];
        day++;
    }
    
    if(totalData < 0) {
        totalData = 0;
    }
    
    printf("Days Used: %d\n", day);
    printf("Remaining Data: %dGB\n", totalData);
    
    return 0;
}