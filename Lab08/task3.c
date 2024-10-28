#include <stdio.h>

int main() {
    int arr[2][3][3] = {
        {{1, 3, 1}, {0, 5, 9}, {1, 3, 2}},
        {{9, 0, 0}, {6, 2, 4}, {0, 1, 1}}
    };

    for (int pg = 0; pg < 2; pg++) {
        int sum = 0; 
        for (int r = 0; r < 3; r++) {
            for (int c = 0; c < 3; c++) {
                sum = sum+ arr[pg][r][c]; 
            }
        }
        printf("Sum of Page %d: %d\n", pg + 1, sum); 
}
    return 0;
}
