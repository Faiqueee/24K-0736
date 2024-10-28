#include <stdio.h>

int main() {
    int r;

    printf("Enter rows for upper half ");
    scanf("%d", &r);

    for (int i = 1; i <= r; i++) {
        for (int j = i; j < r; j++) {
            printf(" ");
        }
        for (int j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        printf("\n");
    }

    for (int i = r - 1; i >= 1; i--) {//other half
        for (int j = r; j > i; j--) {
            printf(" ");
        }
        for (int j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
