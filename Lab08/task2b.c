#include <stdio.h>

int main() {
    int x;

    printf("Enter an odd num ");
    scanf("%d", &x);

    if (x % 2 == 0) {
        printf("Please enter an odd number.\n");
    return 0;
    }
    

    int y = x;

    for (int i = 1; y > 0; i++) {
        for (int j = 0; j < i && y > 0; j++) {
            printf("%d ", y);
            y=y-2;  
        }
    }

    return 0;
}