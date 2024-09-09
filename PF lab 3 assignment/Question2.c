#include <stdio.h>

int main(){
    int x;
    int y;
    int X;// X equals to x
    scanf("%d\n",&x);
    scanf("%d\n",&y);
    scanf("%d",&X);
    printf("your first swapped value is : %d\n",x=y);
    printf("your second swapped value is :%d",y=X);
    return 0;
    
}