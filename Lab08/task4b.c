#include <stdio.h>

int main() {
    
  // first matrix 
   int arr[3][3];
        for (int i=0; i<3;i++){
            for (int j=0; j<3;j++){
               
                printf("enter for index %d-%d\n",i,j);
                    scanf("%d",&arr[i][j]);
        }
    }
        for (int i=0; i<3;i++){
            for (int j=0; j<3;j++){
                
                    printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    
 //second matrix
   int mat[3][3];
        for (int i=0; i<3;i++){
            for (int j=0; j<3;j++){
               
                printf("enter for index %d-%d\n",i,j);
                    scanf("%d",&mat[i][j]);
        }
    }
        for (int i=0; i<3;i++){
            for (int j=0; j<3;j++){
                
                    printf("%d ",mat[i][j]);
        }
        printf("\n");
    }
    //multipyling
    printf("Below is the sum of two matrices \n");
    for (int i=0; i<3;i++){
            for (int j=0; j<3;j++){
                
                    printf("%d ",arr[i][j]*mat[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}