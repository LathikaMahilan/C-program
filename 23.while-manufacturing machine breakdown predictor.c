#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    int arr[N];
    int i = 0;
    while(i < N) {
        scanf("%d", &arr[i]);
        i++;
    }
    int unsafeCount =0;
    int consecutiveHigh =0;
    int breakdownpoint =0;
    i = 0;
    while(i<N) {
        if(arr[i]>70){
            unsafeCount++;
            consecutiveHigh++;
            if(consecutiveHigh == 3 && breakdownpoint == 0) {
                breakdownpoint = i + 1;
            }
        }else{
            consecutiveHigh =0;
        }
        i++;
    }
    printf("Breakdown At Reading: %d\n",breakdownpoint);
    printf("Unsafe Readings: %d\n",unsafeCount);


    return 0;
}