#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

void fill(char arr[6][5]) {
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 5; j++) {
            arr[i][j] = 'A' + (rand() % 26);
        }
    }
    arr[5][0] = '0';
    arr[5][1] = '5';
    arr[5][2] = '6';
    arr[5][3] = '0';
}

void disp(char arr[6][5]) {
    printf("\nCharacter Array:\n");
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%c ", arr[i][j]);
        }
        printf("\n");
    }
}

int find(char arr[6][5], const char *str) {
    int len = strlen(str);
    
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j <= 5 - len; j++) {
            if (strncmp(&arr[i][j], str, len) == 0) {
                return 1;
            }
        }
    }

    for (int j = 0; j < 6; j++) {
        for (int i = 0; i <= 5 - len; i++) {
            int match = 1;
            for (int k = 0; k < len; k++) {
                if (arr[i + k][j] != str[k]) {
                    match = 0;
                    break;
                }
            }
            if (match) {
                return 1;
            }
        }
    }

    return 0;
}

int main() {
    char grid[6][5];
    char word[100];
    int score = 0;

    srand(time(NULL));

    while (1) {
        fill(grid);
        disp(grid);

        while (1) {
            printf("Enter a string to search (or type 'END' to repopulate): ");
            scanf("%s", word);

            if (strcmp(word, "END") == 0) {
                break;
            }

            if (find(grid, word)) {
                score++;
                printf("%s is present. Score: %d\n", word, score);
            } else {
                score--;
                printf("%s is not present. Score: %d\n", word, score);
            }
        }
    }

    return 0;
}
