#include <iostream>
using namespace std;

int main() {

int arr[4][7];
float sum[7]; 

 for(int i=0;i<4;i++){
     for(int j=0;j<7;j++){
         cout<<"Enter AQI for city "<<i+1<<" on day "<<j+1<<" : ";
         cin>>arr[i][j];
     sum[i]=sum[i]+arr[i][j];
         
     }
 }
 float max=0;
 int index=0;
 cout<<"\n\n\n";
 for(int i=0;i<4;i++){
     cout<<"Average AQI of city "<<i+1<<" : "<<sum[i]/7.00<<"\n";
     if (sum[i]>max) {
         max=sum[i];
     index=i;
         
     }
         
     }
     
     cout<<"City "<<index<<" has the worst air quality averaging : "<<sum[index]/7.00;
  
  cout<<"\n\n\t\tCritical pollution Days \n";
  
 for(int i=0;i<4;i++){
     for(int j=0;j<7;j++){
  if(arr[i][j]>150)       cout<<"city "<<i+1<<" day "<<j+1<<"\n";
     }
     cout<<"\n";
 }   
 
 int chart[4][7];
 
 
 for(int i=0;i<4;i++){
     for(int j=0;j<7;j++){
  
 chart[i][j]=arr[i][j]/50; 
  
   }
 }   
 
 cout<<"\n\n\t\tBar CHart \n";
 for(int i=0;i<4;i++){
     for(int j=0;j<7;j++){
  
   cout<<"\n";
 cout<<"City "<<i+1<<" Day "<<j+1<<"=> ";
  for(int k=0;k<chart[i][j];k++) cout<<"*";
   
     }
   cout<<"\n";
 }   
 
 int arr_month[4][28];
float sum_month[4] = {0};

for(int i=0; i<4; i++){
    for(int j=0; j<28; j++){
        cout<<"Enter AQI for city "<<i+1<<" on day "<<j+1<<" : ";
        cin>>arr_month[i][j];
        sum_month[i] += arr_month[i][j];
    }
}

float avg_month[4];
for(int i=0; i<4; i++){
    avg_month[i] = sum_month[i] / 28.0;
    cout<<"Monthly average AQI of city "<<i+1<<" : "<<avg_month[i]<<"\n";
}

float week_avg[4][4];
for(int i=0; i<4; i++){
    for(int w=0; w<4; w++){
        float temp = 0;
        for(int j=w*7; j<(w+1)*7; j++) temp += arr_month[i][j];
        week_avg[i][w] = temp / 7.0;
    }
}

float max_improvement = 0;
int best_city = 0;
for(int i=0; i<4; i++){
    float improvement = week_avg[i][0] - week_avg[i][3];
    if(improvement > max_improvement){
        max_improvement = improvement;
        best_city = i;
    }
}
cout<<"City "<<best_city+1<<" has the most improved air quality with a decrease of "<<max_improvement<<"\n";

cout<<"\n\n\t\tReport Summary\n";
for(int i=0; i<4; i++){
    cout<<"City "<<i+1<<" weekly averages: ";
    for(int w=0; w<4; w++) cout<<week_avg[i][w]<<" ";
    cout<<"\n";
}

cout<<"\n\t\tCritical pollution days (AQI > 150)\n";
for(int i=0; i<4; i++){
    for(int j=0; j<28; j++){
        if(arr_month[i][j] > 150) cout<<"City "<<i+1<<" Day "<<j+1<<"\n";
    }
}

float highest_AQI = 0, lowest_AQI = arr_month[0][0];
for(int i=0; i<4; i++){
    for(int j=0; j<28; j++){
        if(arr_month[i][j] > highest_AQI) highest_AQI = arr_month[i][j];
        if(arr_month[i][j] < lowest_AQI) lowest_AQI = arr_month[i][j];
    }
}

cout<<"Highest AQI recorded: "<<highest_AQI<<"\n";
cout<<"Lowest AQI recorded: "<<lowest_AQI<<"\n";

    return 0;
}