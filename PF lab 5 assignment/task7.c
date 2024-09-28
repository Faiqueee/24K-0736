#include <stdio.h>
int main(){
    int a;
    int b;
    int d=0;// used as reference here take 0
    printf("enter values : \n");
    scanf("%d%d",&a,&b);
    int A=a;
    a=b^d;
    printf("swapped value of a is : %d\n",a);
    b=A^d;
    printf("swapped value of b is : %d\n",b);

    return 0;
}