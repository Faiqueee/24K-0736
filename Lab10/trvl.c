#include <stdio.h>
#include <string.h>

struct trvlinfo{
  
  char pname[30];
  char destination[30];
  int cost;
  int seats;
    
};  
void display(struct trvlinfo package[4]){
    for (int i=0;i<4;i++){
        printf("------Packege no. %d------\n",i);
        printf("Name : %s\n",package[i].pname);
        printf("Destination : %s\n",package[i].destination);
        printf("Cost : %d\n",package[i].cost);
        printf("Seats : %d\n",package[i].seats);
        
    }
    return;
}
void book(struct trvlinfo package[],int m){
    
        printf("------Packege you booked : ------\n");
        printf("Name : %s\n",package[m].pname);
        printf("Destination : %s\n",package[m].destination);
        printf("Cost : %d\n",package[m].cost);
        printf("Seats : %d\n",package[m].seats);
    
    return;
}

int main() {
    
    struct trvlinfo package[4];
    strcpy(package[0].pname,"tokarachi");
    strcpy(package[0].destination,"Karachi");
    package[0].cost=10000;
    package[0].seats=50;

    strcpy(package[1].pname,"tolahore");
    strcpy(package[1].destination,"Lahore");
    package[1].cost=20000;
    package[1].seats=50;
    
    strcpy(package[2].pname,"toislamabad");
    strcpy(package[2].destination,"Islamabad");
    package[2].cost=30000;
    package[2].seats=50;
    
    strcpy(package[3].pname,"tomurree");
    strcpy(package[3].destination,"Murrree");
    package[3].cost=50000;
    package[3].seats=50;
    printf("Enter 1 to display packages and 2 to book a travel\n");
    int x;
    scanf("%d",&x);
    if(x==1){
    display(package);}
    else if(x==2){
        display(package);
        int m;
        printf("Enter package you want to book : ");
        scanf("%d",&m);
        book(package,m);
    }
    
    return 0;
}