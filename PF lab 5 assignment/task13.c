#include <stdio.h>
int main(){
int a;
printf("enter a : \n");
scanf("%d",&a);
int b=a<<1;
printf("encrypted value of a is %d\n",b);
int c=b>>1;
printf("decrypted value of c is %d",c);

    return 0;
}