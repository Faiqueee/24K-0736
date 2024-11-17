#include <stdio.h>

int main() {
    int n;
    int l1 = 0, l2 = 0;
    printf("Enter the number of words: ");
    scanf("%d", &n);
    char words[n][100];
    
    for (int i = 0; i < n; i++) {
        printf("Enter word %d: ", i + 1);
        scanf("%s", words[i]);
    }

    for (int i = n - 1; i >= 0; i--) {
        if (words[i][0] != ' ') {
            l1 = 0;
            while (words[i][l1] != '\0') l1++;
            printf("[%s", words[i]);

            for (int j = i - 1; j >= 0; j--) {
                l2 = 0;
                while (words[j][l2] != '\0') l2++;
                
                for (int k = 0; words[i][k] != '\0'; k++) {
                    for (int l = 0; words[j][l] != '\0'; l++) {
                        if (words[i][k] == words[j][l]) {
                            break;
                        }
                    }
                    if (words[j][l] == '\0') break;
                }

                if (words[i][k] == '\0' && l1 == l2) {
                    printf(",%s", words[j]);
                    
                    int idx = 0;
                    while (words[j][idx] != '\0') {
                        words[j][idx] = ' ';
                        idx++;
                    }
                }
            }
            printf("],");
        }
    }

    return 0;
}
