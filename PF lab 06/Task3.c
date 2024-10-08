#include <stdio.h>

int main() {
    int n, originalN;
    printf("enter a number: ");
    scanf("%d", &n);
    originalN = n;
    int i;
    for(i = 0; n > 9; i++) {
        n = n / 10;
    }
    if(i > 0) {
        printf(".The Number you entered is a multiple digit number \n");
    } else {
        printf(".The Number you entered is not multiple digit number\n");
    }
    n = originalN;
    if (n <= 1) { 
        printf(".The Number is neither Prime nor Composite \n");
    } else {
        int counter = 0;
        int j;
        for (j = 1; j <= n; j++) {
            if ((n % j) == 0) {
                counter = counter + 1;
                if (counter >= 3) {
                    break;
                }
            }
        }
        if (counter > 2) {
            printf(".The Number is a Composite Number \n");
        } else {
            printf(".The Number is a Prime number \n");
        }
    }
    return 0;
}
