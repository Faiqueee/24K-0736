#include <stdio.h>

int main() {
    
    int n;
    printf("enter number of desired elements in an array\n");
    scanf("%d",&n);
    
    int arr[n];
    for (int j=0;j<n;j++){
        printf("Enter element for index %d\n",j);
        scanf("%d",&arr[j]);
        if (arr[j]>=9999){
            printf("Error occured enter value smaller than 9999 please\n");
            j--;
        }
    }
    int max=arr[0];
    int maxind;
    for (int i=0;i<n;i++){
        
        if (max<arr[i]){
            max=arr[i];
            maxind=i;
        }
                
    }
    printf("your first greatest number is %d at index %d\n", max,maxind);
    
    arr[maxind]=-9999;
    for (int k=0;k<n;k++){
        
        if (arr[maxind]<arr[k]){
            arr[maxind]=arr[k];
        }
    }
        printf("your second greatest number is %d", arr[maxind]);

    return 0;
}