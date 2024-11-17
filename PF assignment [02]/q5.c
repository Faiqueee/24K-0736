#include <stdio.h>
int main() {
    int count;
    printf("Enter the number of elements:\n");
    scanf("%d", &count);
    int arr[count];
    for (int i = 0; i < count; i++) {
        printf("Enter number for array index %d:\n", i);
        scanf("%d", &arr[i]);
    }
    printf("\nHorizontal Histogram:\n");
    for (int i = 0; i < count; i++) {
        printf("Value %d: ", i + 1);
        for (int j = 0; j < arr[i]; j++) {
            printf("*");
        }
        printf("\n");
    }
    printf("\nVertical Histogram:\n");
    int max_value = 0;
    for (int i = 0; i < count; i++) {
        if (arr[i] > max_value) {
            max_value = arr[i];
        }
    }
    for (int i = max_value; i > 0; i--) {
        for (int j = 0; j < count; j++) {
            if (arr[j] >= i) {
                printf("* ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }
    for (int i = 0; i < count; i++) {
        printf("%d ", i + 1);
    }
    printf("\n");

    return 0;
}