#include <stdio.h>

int main() {
    
    int n;
    printf("enter 1 for built in map and 2 for to design ur own map : ");
    scanf("%d",&n);
    char arr[5][5]; 
    if(n==1){
        arr[0][0] = 'P';
        arr[0][1] = ' ';
        arr[0][2] = 'I';
        arr[0][3] = 'X';
        arr[0][4] = ' ';
        arr[1][0] = ' ';
        arr[1][1] = 'X';
        arr[1][2] = ' ';
        arr[1][3] = ' ';
        arr[1][4] = ' ';
        arr[2][0] = 'I';
        arr[2][1] = ' ';
        arr[2][2] = 'X';
        arr[2][3] = 'X';
        arr[2][4] = ' ';
        arr[3][0] = ' ';
        arr[3][1] = ' ';
        arr[3][2] = ' ';
        arr[3][3] = 'I';
        arr[3][4] = 'X';
        arr[4][0] = ' ';
        arr[4][1] = 'X';
        arr[4][2] = ' ';
        arr[4][3] = ' ';
        arr[4][4] = 'P';
    }
  else if(n == 2) {
    arr[0][0] = 'P';
    
    for (int i = 0; i < 5; i++) {
        for (int j = 1; j < 5; j++) {
            printf("Enter character for map at index %d,%d: ", i, j);
            scanf(" %c", &arr[i][j]);

            if (arr[i][j] != 'I' && arr[i][j] != 'X' && arr[i][j] != '_') {
                printf("Invalid input.\n");
                j--;
            }
        }
    }
}

    int i = 0, j = 0;  
    char in;
    
    printf("The map you created is : \n");
    for (int x = 0; x < 5; x++) {
        for (int y = 0; y < 5; y++) {
            printf("'%c' ", arr[x][y]);
        }
        printf("\n");
    }

    while (1) {
        printf("\nCurrent Position: (%d, %d)\n", i, j);
        printf("Please use W, A, S, D for movement, or Q to quit.\n");
        printf("Enter your move: ");
        scanf(" %c", &in); 

        if (in == 'Q' || in == 'q') {
            printf("Game Over.\n");
            break;
        }

        arr[i][j] = ' ';

        if (in == 'W' || in == 'w') {
            if (i > 0 && arr[i-1][j] != 'X') {
                i--;
            } else {
                printf("Invalid move! You can't go up there.\n");
            }
        }
        else if (in == 'S' || in == 's') {
            if (i < 4 && arr[i+1][j] != 'X') {
                i++;
            } else {
                printf("Invalid move! You can't go down there.\n");
            }
        }
        else if (in == 'A' || in == 'a') {
            if (j > 0 && arr[i][j-1] != 'X') {
                j--;
            } else {
                printf("Invalid move! You can't go left there.\n");
            }
        }
        else if (in == 'D' || in == 'd') {
            if (j < 4 && arr[i][j+1] != 'X') {
                j++;
            } else {
                printf("Invalid move! You can't go right there.\n");
            }
        }
        else {
            printf("Invalid input use WASD.\n");
            continue;
        }

        if (arr[i][j] == 'I') {
            arr[i][j] = 'P';  
            printf("You collected an item!\n");
        } 
        else if (arr[i][j] == 'X') {
            printf("You hit an obstacle!\n");
            if (in == 'W' || in == 'w') i++;
            else if (in == 'S' || in == 's') i--;
            else if (in == 'A' || in == 'a') j++;
            else if (in == 'D' || in == 'd') j--;
            continue;
        } 
        else {
            arr[i][j] = 'P';  
        }

        printf("The map is now: \n");
        for (int x = 0; x < 5; x++) {
            for (int y = 0; y < 5; y++) {
                printf("'%c' ", arr[x][y]);
            }
            printf("\n");
        }
    }

    return 0;
}
