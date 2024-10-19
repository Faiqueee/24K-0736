#include <stdio.h>

int main() {
    int arr[10]={4,1,6,8,10,21,8,9,2,6};
    int max=arr[0];
    for(int i=0;i<10;i++){
        if(max<arr[i])
        max=arr[i];
    }
printf("maximum number = %d",max);

int min=arr[0];
    for(int i=0;i<10;i++){
        if(arr[i]<min)
        min=arr[i];
    }
printf("\nminimum number = %d",min);

    return 0;
}