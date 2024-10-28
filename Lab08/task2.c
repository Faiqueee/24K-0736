#include <stdio.h>

int main() {

    int arr[2][2];
    for(int x=0;x<2;x++){
        for(int y=0;y<2;y++){
            printf("enter for element at row %d and index %d\n",x,y);
        scanf("%d",&arr[x][y]);
        }

    }
    
    // for transpose
int a =arr[0][0];
arr[0][0]=arr[1][1];
arr[1][1]=a;
arr[0][1]=-arr[0][1];
arr[1][0]=-arr[1][0];
    
    for(int x=0;x<2;x++){
        for(int y=0;y<2;y++){
            
            printf("|%d| ",arr[x][y]);
        }
printf("\n");
    }

    return 0;
}