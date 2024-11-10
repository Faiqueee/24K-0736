#include <stdio.h>
#include <string.h>

int main() {
    int x, y;
    scanf("%d%d", &x, &y);
    char words[x][y + 1];
    int i, j, length, isPalindrome;

    printf("enter words\n");
    for (i = 0; i < x; i++) {
        scanf("%s", words[i]);
    }
    for (i = 0; i < x; i++) {
        length = strlen(words[i]);
        isPalindrome = 1;

        for (j = 0; j < length / 2; j++) {
            if (words[i][j] != words[i][length - j - 1]) {
                isPalindrome = 0;
                break;
            }
        }
        if (isPalindrome) {
            printf("%s: Palindrome\n", words[i]);
        } else {
            printf("%s: Not Palindrome\n", words[i]);
        }
    }

    return 0;
}
