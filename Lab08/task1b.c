#include <stdio.h>

int main() {
    int start, end;

    printf("Enter inital value ");
    scanf("%d", &start);
    printf("Enter last value in series ");
    scanf("%d", &end);

    for (int num = start; num <= end; num++) {
        if (num < 2) continue; 
        int pri = 1; 
        
        for (int i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                pri = 0; 
                break;
            }
        }

        if (pri) {
            printf("%d ", num);
        }
    }

    printf("\n");
    return 0;
}