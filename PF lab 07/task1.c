#include <stdio.h>

int main() {
    int sum=0;
    int arr[9]={1,2,3,4,5,6,7,8,9};
    for(int i=0;i<9;i++){
        sum=sum+arr[i];
    }
    printf("sum of elements in array is : %d",sum);
    

    return 0;
}