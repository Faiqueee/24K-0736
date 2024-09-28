#include <stdio.h>

int main() {
    int age;
    int income;
    int cs;
    printf("Please enter your age, income, and credit score : \n");
    scanf("%d%d%d",&age,&income,&cs);
    if(age>=18 && !(age>=60) && (income>=100000 || cs>=800)){
        printf("you are eligible for loan");
    }else{
        printf("you are not eligible for loan");
    }
    
     
    return 0;
}