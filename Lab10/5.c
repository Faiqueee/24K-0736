#include <stdio.h>
void recursive(int arr[],int n){
    if(n<0) return;
    int temp=n;
    printf("Enter for element at index %d.\n",temp);
    scanf("%d",&arr[n]);
    printf("Element at index %d is %d.\n",temp,arr[n]);
    return recursive(arr,n-1);
}
int main() {
    
    int n;
    printf("Enter size of array : ");
    scanf("%d",&n);
    int arr[n];
    
    recursive(arr,n-1);
    
    return 0;
}