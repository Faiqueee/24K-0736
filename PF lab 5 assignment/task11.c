#include <stdio.h>
int main(){
    int a;
    int b;
    int c;
    printf("enter three numbers :\n");
    printf("a = ");
    scanf("%d",&a);
    printf("b = ");
    scanf("%d",&b);
    printf("c = ");
    scanf("%d",&c);


    if (a>b){
        if (a>c){
            printf("a is the greatest of three numbers having intergral value = %d",a);
        }else{
            printf("c is the greatest of three numbers having integral value = %d",c);
        }
    }
    else if(b>c){
        printf("b is the greatest of three numbers having integral value = %d",b);
    }else{
        printf("c is the greatest of three numbers having integral value = %d",c);
    }

    return 0;
}