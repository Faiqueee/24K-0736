#include <stdio.h>
int main() {
int age;
printf("enter your age : ");
scanf("%d",&age);
if (age>=0){
    if(age>=60){
        printf("SENIOR");
    } else if(age<60&&age>=20){
        printf("ADULT");
        }else if(age>=13&&age<20){
            printf("teenager");
        } else if (age<13&&age>=0){
            printf("CHILD");
        }
        }else{
            printf("invalid age input");
        }

return 0;
}