#include <stdio.h>

int main(){
    int salary;
    float taxrate;
    scanf("%d\n",&salary);
    scanf("%f",&taxrate);
    printf("salary received after tax deduction is:%f\n",salary-salary*taxrate);
   
    return 0;