#include <stdio.h>

int main() {
    int i, j, n = 4;
    int size = 2 * n - 1;

    for(i = 0; i < size; i++) {
        for(j = 0; j < size; j++) {
            int top = i;
            int bottom = j;
            int right = size - 1 - i;
            int left = size - 1 - j;

            int min = top;
            if(bottom < min) min = bottom;
            if(right < min) min = right;
            if(left < min) min = left;

            printf("%d ", n - min);
        }
        printf("\n");
    }

    return 0;
}