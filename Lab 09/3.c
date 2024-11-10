#include <stdio.h>

int prime(int num) {
    if (num <= 1) return 0;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return 0;
    }
    return 1;
}

int main() {
    int n, number;
    
    printf("How many numbers: ");
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++) {
        printf("Enter number: ");
        scanf("%d", &number);
        
        if (prime(number)) {
            printf("Prime\n");
        } else {
            printf("Not prime\n");
        }
    }
    
    return 0;
}
