#include <iostream>
using namespace std;

class ticket{
  
  int ticketid;
  string pname;
  float price;
  string date;
  string destination;
  
  public:
  
  ticket(){
      ticketid=0;
     pname="X";
     price=0.0;
     date="1-jan-2000";
     destination="Unknown";
  }
  
   virtual void reserve(){
        cout<<"Ticket reserved for " << pname << endl;
    }
    virtual void cancel(){
        cout<<"Ticket cancelled for " << pname << endl;
    }
 virtual void displayticketinfo(){
      cout<<"Ticket ID : "<<ticketid<<endl;
      cout<<"Passenger Name : "<<pname<<endl;
      cout<<"Price : "<<price<<endl;
      cout<<"Date : "<<date<<endl;
      cout<<"Destination : "<<destination<<endl;
 }
    
};

class FlightTicket: public ticket{
  
  string airlinename;
  int flightno;
  string seatclass;
  
  public:
  
  FlightTicket(){
      airlinename="abc";
      flightno=2;
      seatclass="Economy";
  }
  
  virtual void displayticketinfo(){
      cout<<"Airline name : "<<airlinename<<endl;
      cout<<"Flight number  : "<<flightno<<endl;
      cout<<"Seat class : "<<seatclass<<endl;
  }
    
    
};

class TrainTicket: public ticket{
  
  int traino;
  string coachtype;
  string departuretime;
  
  public:
  
  TrainTicket(){
      traino=0;
      coachtype="X";
      departuretime="00:00";
  }
  
  void reserve(){
       cout<<"Auto-assigned seat in "<<coachType<<" for Train No: "<< trainNumber<<endl;
 }
    
};

class BusTicket: public ticket{

string buscompany;
int seatnumber;

public:

BusTicket(){
    buscompany="xyz";
    seatnumber=0;
}

void cancel(){
cout<<"Flight cancelled for seat number "<<seatnumber<<endl;    
}
    
};

class ConcertTicket : public ticket{
    
    string artistname;
    string venue;
    string seattype;
    
    public:
    
    ConcertTicket(){
        artistname="zzz";
        venue="00a";
        seattype="X";
    }
    
  void displayticketinfo(){
      cout<<"Artist name : "<<artistname<<endl;
      cout<<"Venue : "<<venue<<endl;
      cout<<"Seat type : "<<seattype<<endl;
  }
    
};


int main() {

ticket t1;
t1.displayticketinfo();


    return 0;
}