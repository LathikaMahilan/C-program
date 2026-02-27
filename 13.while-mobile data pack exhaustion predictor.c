#include <stdio.h>

int main() {
    int dataPackGB, N;
    scanf("%d", &dataPackGB);
    scanf("%d", &N);

    int i = 0;
    int usage;
    int exhaustedDay = 0;
    int remainingData = dataPackGB;

    while(i < N) {
        scanf("%d", &usage);
        remainingData -= usage;
        exhaustedDay = i + 1;  // Days are 1-indexed

        if(remainingData <= 0) {
            break; // Data exhausted
        }

        i++;
    }

    int overusedData = remainingData < 0 ? -remainingData : 0;

    printf("Exhausted Day: %d\n", exhaustedDay);
    printf("Overused Data: %d\n", overusedData);

    return 0;
}