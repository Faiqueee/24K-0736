#include <stdio.h>

int main() {
    printf("1, 2");
    int n=1;
    
    for(int i=1, j=2; n<=4; n++){
        int sum=i+j;
        i=j;
        j=sum;
        printf(", ");
        printf("%d", sum);
    }
    
    return 0;
}