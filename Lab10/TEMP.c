#include <stdio.h>

int compare(int x,int y,int arr[]){
    static int k=0;
    for(int i=0;i<y;i++){
        if(arr[i]>x) k++;
    }
    return k;
}

int main() {

const int x=100;

int y;
printf("Enter no of temperatures to compare : ");
scanf("%d",&y);
int arr[y];

    for(int i=0;i<y;i++){
        printf("Enter temperature for index %d : ",i);
        scanf("%d",&arr[i]);
    }
int z = compare(x,y,arr);
printf("\nTemperature exceded limit %d times.",z);
    return 0;
}