#include <stdio.h>

int main(){
    int a,b;
    scanf("%d%d\n",&a,&b);
    char n;
    printf("enter an operation:");
    scanf("%c",&n);
    switch (n){
        case '+':
        printf("a+b=%d",a+b);
        break;
        case '-':
        printf("a-b=%d",a-b);
        break;      
        case '*':
        printf("a*b=%d",a*b);
        break;        
        case '/':
        printf("a/b=%d",a/b);
        break;
        default:
        printf("invalid operator");
    }
    
    
    return 0;
}