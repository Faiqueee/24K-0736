#include <stdio.h>

#define m2km 0.001

float convert(float m){
    float km=m*m2km;
    static int count=0;
    count++;
    return km;
}

int main() {
    
    for (int i=0;i<99999;i++){
        
    printf("Enter 1 to continue to conversion and 0 to exit : ");
    int z;
    scanf("%d",&z);
    if(z==1){
    float met;
    printf("Enter meters for conversion to kilometers : ");
    scanf("%f",&met);
    
    float n = convert(met);
    printf("%.3f meters in km are : %.3f\n",met,n);
    }
    else if (z==0){
        printf("You exited");
        break;
    }
    else printf("Invalid input\n");
    }
    
    return 0;
}