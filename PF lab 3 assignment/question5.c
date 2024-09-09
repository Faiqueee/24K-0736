#include <stdio.h>

int main() {
    int principle;
    float ROI;
    int period;
    scanf("%d",&principle);//input value of the principle must be                       between hundred rs to a million rs
    scanf("%f",&ROI);//ROI which is rate of interest must be                      between 5 to 10 percent
    scanf("%d",&period);//Period must be between 1 to 10 years.
    printf("\n");
    float SimpleInterest=principle*ROI*period/100;
    printf("Simple Interest :%.2f",SimpleInterest);
    return 0;
}