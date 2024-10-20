#include <stdio.h>

int main() {

    int n;
    printf("enter limit of array : \n");
    scanf("%d",&n);
    int arr[n];
    
    for (int i=0;i<n;i++){
        printf("ENTER VALUE FOR INDEX : %d\n",i);
        scanf("%d",&arr[i]);
        printf("\nvalue at index %d = %d.\n",i,arr[i]);
        
    }
    
    
            for (int i=0,j=0;i<=n && j<n;i++){
    if (arr[j]==arr[i] && j!=i && i!=n){
        printf("%d occurs more than once \n",arr[i]);
    }else if(i==n){
        arr[j++];
        i=0;
        
    }if (j==n-1){
            break;
        }
        
            }
            
    return 0;
}