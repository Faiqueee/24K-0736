#include <stdio.h>
int main(){
    int num1,num2;
    printf("enter your two numbers :\n");
    scanf("%d%d",&num1,&num2);
    num1>num2 ? printf("max numb is :%d",num1) : printf("max numb is %d",num2);
    
    
    
    return 0;
}