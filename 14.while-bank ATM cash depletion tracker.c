#include <stdio.h>

int main() {
    int ATMcash, N;
    scanf("%d", &ATMcash);
    scanf("%d", &N);

    int i = 0;
    int withdrawal;
    int successful = 0;

    while(i < N) {
        scanf("%d", &withdrawal);

        if(ATMcash >= withdrawal) {
            ATMcash -= withdrawal;
            successful++;
        } else {
            break; // Not enough cash for next withdrawal
        }

        i++;
    }

    printf("Successful Withdrawals: %d\n", successful);
    printf("Remaining Cash: %d\n", ATMcash);

    return 0;
}