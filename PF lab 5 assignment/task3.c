#include <stdio.h>

int main() {
int number;
printf("enter a number : ");
scanf("%d",&number);
if(number>0||number<0||number==0){
    if(number<0){
        printf("NEGATIVE");
    }if (number==0){
        printf("ZERO");
    }
    if(number>0){
        if (number%2==0){
            printf("EVEN");
        }else{
            printf("ODD");
        }
    }
}
    return 0;
}