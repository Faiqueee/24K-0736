#include <stdio.h>

float math(int a, int b, char x);

int main() {
    char x;
    printf("Enter operator\n");
    scanf(" %c", &x);
    int a, b;
    printf("Enter values for a and b\n");
    scanf("%d%d",&a,&b);

    float z = math(a, b, x);
    printf("Result= %.2f\n", z);

    return 0;
}

float math(int a, int b, char x) {
    
    float result;
    if (x == '+') {
        result=a+b;
    } 
    else if (x == '-') {
        result=a-b;
    } 
    else if (x == '*') {
        result=a*b;
    } 
    else if (x=='/') {
        if (b==0) {
            printf("Error: Division by zero!\n");
            return 0;
        }
        result=(float)a/b;
    } 
    else{
        printf("Invalid operation\n");
        return 0;
    }

    return result;
}