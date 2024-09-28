#include <stdio.h>
int main(){
    int n;
    printf("enter a number :\n");
    scanf("%d",&n);
    n>=0? (n==0? printf("zero") : printf("postive") ): printf("negative");

    return 0;
}