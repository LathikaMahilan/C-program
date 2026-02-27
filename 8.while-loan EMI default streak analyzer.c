#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int i = 0;
    int status;
    int currentStreak = 0, longestStreak = 0;

    while(i < N) {
        scanf("%d", &status);

        if(status == 0) {   
            currentStreak++;
            if(currentStreak > longestStreak) {
                longestStreak = currentStreak;
            }
        } else {            
            currentStreak = 0;
        }

        i++;
    }

    printf("Longest Default Streak: %d\n", longestStreak);

    return 0;
}