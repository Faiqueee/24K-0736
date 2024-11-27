#include <stdio.h>

int sum(int n,int Isum,int temp);

int main() {
    int n;
    printf("Enter a Number : ");
    scanf("%d",&n);
    int Isum=0;
    int temp=1;
    sum(n,Isum,temp);
    
    printf("Sum of digits is : %d",sum(n,Isum,temp));

    return 0;
}

int sum(int n,int s,int temp){
    temp=n%10;
    s=s+temp;
    n=n/10;
    if(n<10){
        return s+n;
    }
    return sum(n,s,temp);
}