#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define MAX_LEN 20

int binToDec(int num);
int decToBin(int num);
void decToHex(int num);
void hexToDec(char hex[]);
void binToHex(int num);
void hexToBin(char hex[]);

int showMenu() {
    int choice;
    
    printf("\nConversion Menu:\n");
    printf("1. Binary to Decimal\n");
    printf("2. Decimal to Binary\n");
    printf("3. Decimal to Hexadecimal\n");
    printf("4. Hexadecimal to Decimal\n");
    printf("5. Binary to Hexadecimal\n");
    printf("6. Hexadecimal to Binary\n");
    printf("7. Exit\n");
    printf("Enter choice: ");
    
    while (scanf("%d", &choice) != 1) {
        printf("Invalid input! Please enter a number.\n");
        while(getchar() != '\n');
        printf("Enter choice: ");
    }
    
    return choice;
}

int main() {
    int choice, decNum, binNum;
    char hex[MAX_LEN];

    while (1) {
        choice = showMenu();

        switch (choice) {
            case 1:
                printf("Enter binary number: ");
                scanf("%d", &binNum);
                printf("Decimal: %d\n", binToDec(binNum));
                break;

            case 2:
                printf("Enter decimal number: ");
                scanf("%d", &decNum);
                printf("Binary: %d\n", decToBin(decNum));
                break;

            case 3:
                printf("Enter decimal number: ");
                scanf("%d", &decNum);
                decToHex(decNum);
                break;

            case 4:
                printf("Enter hexadecimal number: ");
                scanf("%s", hex);
                hexToDec(hex);
                break;

            case 5:
                printf("Enter binary number: ");
                scanf("%d", &binNum);
                binToHex(binNum);
                break;

            case 6:
                printf("Enter hexadecimal number: ");
                scanf("%s", hex);
                hexToBin(hex);
                break;

            case 7:
                printf("Exiting...\n");
                exit(0);

            default:
                printf("Invalid choice! Try again.\n");
        }
    }

    return 0;
}

int binToDec(int num) {
    int dec = 0, base = 1, rem;
    
    while (num > 0) {
        rem = num % 10;
        dec += rem * base;
        num /= 10;
        base *= 2;
    }
    
    return dec;
}

int decToBin(int num) {
    int bin = 0, base = 1;
    
    while (num > 0) {
        int last = num % 2;
        bin += last * base;
        num /= 2;
        base *= 10;
    }
    
    return bin;
}

void decToHex(int num) {
    char hex[20];
    int i = 0;

    if (num == 0) {
        printf("Hexadecimal: 0\n");
        return;
    }

    while (num != 0) {
        int temp = num % 16;
        
        if (temp < 10)
            hex[i++] = temp + '0';
        else
            hex[i++] = temp - 10 + 'A';
        
        num /= 16;
    }

    printf("Hexadecimal: ");
    for (int j = i - 1; j >= 0; j--) {
        putchar(hex[j]);
    }
    putchar('\n');
}

void hexToDec(char hex[]) {
    int dec = (int)strtol(hex, NULL, 16);
    printf("Decimal: %d\n", dec);
}

void binToHex(int num) {
    int dec = binToDec(num);
    decToHex(dec);
}

void hexToBin(char hex[]) {
    int dec = (int)strtol(hex, NULL, 16);
    
    if (dec == 0) {
        printf("Binary: 0\n");
        return;
    }

    char bin[100];
    int index = 0;

    while (dec > 0) {
        bin[index++] = (dec % 2) + '0';
        dec /= 2;
    }

    printf("Binary: ");
    for (int j = index - 1; j >= 0; j--) {
        putchar(bin[j]);
    }
    putchar('\n');
}
