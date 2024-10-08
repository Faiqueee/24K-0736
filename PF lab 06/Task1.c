#include <stdio.h>

int main() {
    int n;
    int i;
    printf("enter a number :\n ");
    scanf("%d",&n);
    do{
        
        printf("%d\nenter a number\n",n);
        scanf("%d",&i);
        n=n+i;


    }while(i!=0);
    printf("end");
    


    return 0;
}