#include <stdio.h>

int main() {
    int CustomerID;
    printf("Customer ID : ");
    scanf("%d",&CustomerID);
    int UnitsConsumed;
    printf("Units Consumed : ");
    scanf("%d",&UnitsConsumed);
    
    if(UnitsConsumed>=0&&UnitsConsumed<=199){
        printf("Amount Charges @16.20 per unit:%.2f",UnitsConsumed*16.20);
    }
    else if(UnitsConsumed>=200&&UnitsConsumed<300){
        printf("Amount Charges @20.10 per unit:%.2f",UnitsConsumed*20.10);
    }
    else if(UnitsConsumed>=300&&UnitsConsumed<500){
        printf("Amount Charges @27.10 per unit:%.2f",UnitsConsumed*27.10);
    }
    else if(UnitsConsumed>=500&&UnitsConsumed*35.90<18000.00){
        printf("Amount Charges @35.90 per unit:%.2f",UnitsConsumed*35.90);
        
    }
    else if (UnitsConsumed>500&&UnitsConsumed*35.90>18000.00){
        float SA=0.15;// surcharge charge rate
        float SurchargeAmmount=SA*UnitsConsumed*35.90;
        printf("Surcharge Ammount:%.2f\n",SurchargeAmmount);
        printf("Net Ammount Paid by the Customer:%.2f",SurchargeAmmount+UnitsConsumed*35.90);
    }
    
    
    
    
    
    return 0;
}