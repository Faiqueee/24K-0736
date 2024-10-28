#include <stdio.h>

int main() {
    int mat[3][3];
    int i, j, k;
    int isSP = 0;

    printf("Enter the elements for matrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("enter for element at index %d-%d ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }

    for (i = 0; i < 3; i++) {
        int rowm = mat[i][0];
        int CI = 0;

        for (j = 1; j < 3; j++) {
            if (mat[i][j] < rowm) {
                rowm = mat[i][j];
                CI = j;
            }
        }

        int isLarg = 1;
        for (k = 0; k < 3; k++) {
            if (mat[k][CI] > rowm) {
                isLarg = 0;
                break;
            }
        }
        if (isLarg) {
            printf("Saddle point found at index %d-%d, having value %d\n", i, CI, rowm);
            isSP = 1;
        }
    }

    if (!isSP) {
        printf("No saddle point found \n");
    }

    return 0;
}