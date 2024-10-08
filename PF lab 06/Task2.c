#include <stdio.h>

int main() {
    
    int n;
    printf("enter a number : \n");
    scanf("%d",&n);
    int i;
    for(i=0;n>9;i++){
        n=n/10;
    }
    printf("%d\n",i);
    if(i>0){
        printf("number you entered is a multiple digit number");
    }else{
        printf("number you entered is not multiple digit number");
    }
    

    return 0;
}