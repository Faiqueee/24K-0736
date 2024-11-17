#include<stdio.h>

int main(){
    int inspSpc , inspN , inspSpcInner , inspStar , inspI , inspJ , inspK;

    printf("Enter any number :");
    scanf("%d", &inspN);

    inspSpc = (inspN*2)-2;
    inspSpcInner = 0;


    for(inspI = 0; inspI <  inspN-1; inspI++){
        for(inspJ = 0; inspJ < inspSpc; inspJ++){
            printf(" ");
        }
        printf("*");
        for(inspK = 0; inspK < inspSpcInner; inspK++){
            printf(" ");
        }

        if(inspK != 0)
            printf("*");
        

        printf("\n");

        inspSpc--;
        if(inspI == 0)
            inspSpcInner++;
        else
            inspSpcInner+=2;
    }


    for(inspI = 0 ;  inspI < inspN; inspI++){
        printf("*");
    }

    for(inspI = 0;  inspI < inspSpcInner; inspI++){
        printf(" ");
    }

    for(inspI = 0 ;  inspI < inspN; inspI++){
        printf("*");
    }


    printf("\n");
    inspSpcInner = (inspSpcInner*2)-1;
    inspSpc = 1;

    for(inspI = 0; inspI < inspN-1;  inspI++){
        for(inspJ = 0; inspJ  < inspSpc; inspJ++){
            printf(" ");
        }
        printf("*");
        for(inspK = 0 ; inspK < inspSpcInner; inspK++){
            printf(" ");
        }
        printf("*");
        printf("\n");
        inspSpcInner-=2;
        inspSpc++;

    }
    

    inspSpc = inspN-2;
    inspSpcInner = 1;
    for(inspI = 0; inspI < inspN-2; inspI++){
        for(inspJ = 0; inspJ < inspSpc; inspJ++){
            printf(" ");
        }
        printf("*");
        for(inspK = 0; inspK < inspSpc; inspK++){
            printf(" ");
        }
        printf("*");
        for(inspJ = 0;  inspJ < inspSpcInner; inspJ++){
            printf(" ");
        }
        printf("*");
        for( inspJ = 0; inspJ < inspSpc; inspJ++){
            printf(" ");
        }
        printf("*");
        printf("\n");
        inspSpc --;
        inspSpcInner+=4;

    }
    inspSpcInner+=2;
    printf("*");
    for(inspJ = 0; inspJ < inspSpcInner; inspJ++){
        printf(" ");
    }
    printf("*");

    return 0;
}
