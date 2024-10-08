#include <stdio.h>

int main() {
    int n=1;
    for(int i=65536; n<=9; n++){
        int mult=i/n;
        i=mult;
        printf("%d", mult);
        printf(", ");
    }
    
    return 0;
}