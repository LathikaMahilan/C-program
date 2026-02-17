#include <stdio.h>

int main() {
    int N, i;
    int patients;
    int totalpatients = 0;
    int overcrowedDays = 0;
    scanf("%d", &N);
    for(i = 0; i < N; i++){
        scanf("%d", &patients);
        totalpatients += patients;
        if(patients > 100){
            overcrowedDays++;
        }
    }
    printf("Total patients : %d\n",totalpatients);
    printf("Overcrowed Days: %d\n",overcrowedDays);
    
 
    return 0;
}