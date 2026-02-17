#include <stdio.h>

int main() {
    int N, i;
    int usage;
    int totalData = 0;
    int highusageDays = 0;
    scanf("%d", &N);
    for(i = 0; i < N; i++) {
        scanf("%d", &usage);
        totalData += usage;
        if(usage > 2){
            highusageDays++;
        }
    }
    printf("Total Data: %d\n",totalData);
    printf("High usage Days: %d\n",highusageDays);

 
    return 0;
}