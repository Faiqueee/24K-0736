#include <stdio.h>
struct point{
    
    int x;
    int y;
    
};
 
int main() {
    int minx=0,miny=0,maxx=0,maxy=0;
    struct point p[4];
    for(int i=0;i<4;i++){
        printf("Enter value of x for point %d : ",i);
        scanf("%d",&p[i].x);
        if(minx>p[i].x){
            minx=p[i].x;
        }
        if(p[i].x>maxx){
            maxx=p[i].x;
        }
        
        printf("Enter value of y for point %d : ",i);
        scanf("%d",&p[i].y);
        if(miny>p[i].y){
            minx=p[i].y;
        }
        if(p[i].y>maxy){
            maxy=p[i].y;
        }
    }
    
    int x,y;
    printf("\nEnter test point coordinates : \n");
    scanf("%d\n%d",&x,&y);
    
    if(x>minx&&x<maxx&&y>miny&&y<maxy){
        printf("Your point lies inside the rectangular region");
    }
    else printf("no your point doesnt lies in the rectangular region");
    
    return 0;
}