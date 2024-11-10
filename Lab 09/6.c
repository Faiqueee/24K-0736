#include <stdio.h>

int maxmin(int arr[],int x,int max,int min){
    
    for(int i=0;i<x;i++){
        printf("enter element for index [%d]\n",i);
        scanf("%d",&arr[i]);
    }
    max=arr[0];
    min=arr[0];
    
    for(int i=0;i<x;i++){
        
        if (arr[i]>arr[0]){
            max=arr[i];
        }
        else if (arr[i]<arr[0]){
            min=arr[i];
        }
    }
    printf("max number is %d\n",max);
    
    printf("min number is %d\n",min);
    return 0;
    
}


int main() {
    
    int x,z;
    printf("enter number of numbers in an array \n");
    scanf("%d",&x);
    int arr[x];
    int max,min;
    
  maxmin(arr,x,max,min);
 
    return 0;
}