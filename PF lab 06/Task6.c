#include <stdio.h>

int main() {
    printf("1, 2");
    int n=1;
    
    for(int i=1, j=2; n<=7; n++){
        int mult=i*j;
        i=j;
        j=mult;
        printf(", ");
        printf("%d", mult);
    }
    
    return 0;
}