#include <stdio.h>

typedef struct info{
    int flightno;
    char dcity[20];
    char date[20];
    int avalsts;
}info;

int main() {

info book;
printf("Enter flight number : ");
scanf("%d",&book.flightno);
printf("Enter city you want to go to : ");
getchar();
scanf("%[^\n]s",book.dcity);
printf("Enter suitable date  : ");
getchar();
scanf("%[^\n]s",book.date);
printf("Avalible seats for flight %d are : \n",book.flightno);
scanf("%d",&book.avalsts);

printf("Your flight details are as follow....\n");

printf("Flight number : %d\n",book.flightno);
printf("City you want to go to : %s\n",book.dcity);
printf("Date of flight : %s\n",book.date);
    return 0;
}