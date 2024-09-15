#include <stdio.h>

int main() {
    int cost;
    printf("enter cost of shopping:\n");
    scanf("%d",&cost);
    if (cost<500){
        printf("you are not eligible for discount\n");
    }
    else if(cost<2000 && cost>500){
        printf("5 percent discount will be applied\n");
        printf("actual amount=%d\n",cost);
        printf("saved amount=%.2f\n",cost*0.05);
        float AS=-cost*0.05+cost;
        printf("amount after discount=%.2f\n",AS);
        
    }    
    else if(cost>=2000 &&cost<=4000){
        printf("10 percent discount will be applied\n");
        printf("actual amount=%d\n",cost);
        printf("saved amount=%.2f\n",cost*0.1);
        float AS=-cost*0.1+cost;
        printf("amount after discount=%.2f\n",AS);

    }    
    else if(cost>=4000 &&cost<=6000){
        printf("20 percent discount will be applied\n");
        printf("actual amount=\n",cost);
        printf("saved amount=%.2f\n",cost*0.2);
        float AS=-cost*0.2+cost;
        printf("amount after discount=%.2f\n",AS);

    }    
    else if(cost>6000){
        printf("35 percent discount will be applied\n");
        printf("actual amount=%d\n",cost);
        printf("saved amount=%.2f",2000*0.35);
        float AS=-cost*0.35+cost;
        printf("amount after discount=%.2f\n",AS);

    }
    
    return 0;
}