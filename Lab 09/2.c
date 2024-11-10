#include <stdio.h>
void swap(int a,int b,int temp);
int main() {
    
    int a,b,temp;
    printf("enter value for a and b\n");
    scanf("%d%d",&a,&b);
    
    swap(a,b,temp);
    
    return 0;
}

void swap(int a,int b,int temp){
    
    temp=a;
    a=b;
    b=temp;
    
    printf("swap value for a is %d\n",a);
    printf("swap value for b is %d",b);
    
    
    return;
    
}