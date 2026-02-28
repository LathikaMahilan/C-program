#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    int arr[N];
    int i = 0;
    while(i < N) {
        scanf("%d",&arr[i]);
        i++;
    }
    int totalFailed =0;
    int consecutiveFailed =0;
    int lockAttempt =0;
    i = 0;
    while(i < N) {
        if(arr[i] == 0){
            totalFailed++;
            consecutiveFailed++;
            if(consecutiveFailed == 3 && lockAttempt == 0){
                lockAttempt = i + 1;
            }
        }else{
            consecutiveFailed =0;
        }
        i++;
    }
    printf("Lock Triggered At Attempt: %d\n", lockAttempt);
    printf("Total Failed Attempts: %d\n",totalFailed);
    


    return 0;
}