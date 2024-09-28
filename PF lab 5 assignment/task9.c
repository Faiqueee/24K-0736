#include <stdio.h>
int main(){
    int year;
    printf("enter an year : \n");
    scanf("%d",&year);
    if(year%400==0){
        printf("is a leap year");
    }else if(year%100==0){
        printf("is not a leap year");
    }else if (year%100!=0 && year%4==0){
        printf("is a leap year");
    }else{
        printf("is not a leap year");
    }
    
    return 0;
}