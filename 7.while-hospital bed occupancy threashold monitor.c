#include <stdio.h>

int main() {
    int capacity, N;
    scanf("%d", &capacity);
    scanf("%d", &N);

    int i = 0;
    int change;
    int occupied = 0;
    int criticalCount = 0;

    while(i < N) {
        scanf("%d", &change);

        occupied += change;

        
        if(occupied > capacity) {
            occupied = capacity;
        }

        
        if(occupied < 0) {
            occupied = 0;
        }

        if(occupied > 0.9 * capacity) {
            criticalCount++;
        }

        i++;
    }

    printf("Final Occupied Beds: %d\n", occupied);
    printf("Critical Hours: %d\n", criticalCount);

    return 0;
}