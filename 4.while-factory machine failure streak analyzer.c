#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int status[N];
    int i = 0;

    while(i < N) {
        scanf("%d", &status[i]);
        i++;
    }

    int longest = 0, current = 0;
    i = 0;

    while(i < N) {
        if(status[i] == 0) {   
            current++;
            if(current > longest) {
                longest = current;
            }
        } else {               
            current = 0;
        }
        i++;
    }

    printf("Longest Failure Streak: %d\n", longest);

    return 0;
}