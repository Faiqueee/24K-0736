#include <stdio.h>

int main() {
    int atd;// bw 0 and 100
    int asg_sco;// bw 0 and 100
    float exm_rlt;//bw 0 and 4
    scanf("%d%d%f",&atd,&asg_sco,&exm_rlt);
    if(atd>=80 && atd<=100){
        if(asg_sco>=80 && asg_sco<=100 && exm_rlt>=3.5 && exm_rlt<=4){
            printf("your grade is : A");
        }else if(asg_sco >= 70 && asg_sco < 80 && exm_rlt >= 3.0 && exm_rlt < 3.5){
            printf("your grade is : B");
        }else if(asg_sco<70 && asg_sco>=60 && exm_rlt<3 && exm_rlt>=2.5){
            printf("your grade is : C");
        }else if(asg_sco<60 && asg_sco>=50 && exm_rlt<2.5 && exm_rlt>=2){
            printf("your grade is : D");
        }
        else{
            printf("ungraded/invalid input");
        }
        }
        else if(atd<80 && atd>=0){
            printf("Ungraded");
        }else{
            printf("invalid attendence input");
        }
    return 0;
}