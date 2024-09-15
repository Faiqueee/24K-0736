#include <stdio.h>

int main() {
    char n;
    printf("enter a character :\n");
    scanf("%c",&n);
    if (n>='a'&& n<='z'){
        printf("character is small alphabet");
    }
    else if(n>='A' && n<='Z'){
        printf("character is a capital alphabet");
    }
    else if(n>='0'&&n<='9'){
        printf("charcter is a digit");
    }
    else {
        printf("charcter is a special character");
    }
    

    return 0;
}