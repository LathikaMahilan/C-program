#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int i = 0;
    int index;
    int prevIndex = 0;
    int consecutiveDrops = 0;
    int totalDrops = 0;
    int crashDay = 0;

    while(i < N) {
        scanf("%d", &index);

        if(i > 0) { // Compare with previous day's index
            if(index < prevIndex) {
                consecutiveDrops++;
                totalDrops++;
                if(consecutiveDrops == 3 && crashDay == 0) {
                    crashDay = i + 1; // Days are 1-indexed
                }
            } else {
                consecutiveDrops = 0; // Reset streak if not a drop
            }
        }

        prevIndex = index;
        i++;
    }

    printf("Crash Day: %d\n", crashDay);
    printf("Total Drops: %d\n", totalDrops);

    return 0;
}