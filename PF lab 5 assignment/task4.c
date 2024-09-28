#include <stdio.h>
int main(){
    int age;
    int CS;// 1 means is a citizen 0 means not a citizen
    printf("enter code for citizenship :\n");
    scanf("%d",&CS);
    printf("enter your age :\n",age);
    scanf("%d",&age);
    if(age>=18 && CS==1 || CS==0){
        if(age>=18&& CS==1){
            printf("you are eligible to vote");
           } else if(age>=18 && CS==0){
                printf("you are not eligible to vote");
            }
        }else{
            printf("you are not eligible to vote/invalid code input");
            
        }
        
    
    return 0;
}