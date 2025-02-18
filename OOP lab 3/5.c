#include <iostream>
using namespace std;

class musicplayer{
  
  string *playlist;
  string currentmusic;
  int count;
  public:
  
  void addmusic();
  void removemusic();
  void playmusic();
  void displayplaylist();
  
  musicplayer(){
      int n;
      cout<<"Enter max limit of musics to be added : ";
      cin>>n;
      playlist = new string[n];
      
      currentmusic="unknown";
      count=0;
  }
 
};//end

void musicplayer :: addmusic(){
    string a;
    cout<<"Enter name of music to be added : ";
    cin>>a;
    
    playlist[count]=a;
    count++;
    
}

void musicplayer :: removemusic(){
    int n;
    cout<<"Enter index of music to be removed  ; ";
    cin>>n;
    playlist[n]="unknown";
    
}
void musicplayer :: displayplaylist(){
    for(int i=0;i<count;i++){
        if(playlist[i]!="unknown")
        cout<<i<<". "<<playlist[i]<<endl;
    }
}

void musicplayer :: playmusic(){
    int n;
    cout<<"Enter index of music to be played : ";
    cin>>n;
    
    currentmusic=playlist[n];
    cout<<"Current music playing is : "<<currentmusic<<endl;
    
}


int main() {
    
    musicplayer m1;
    m1.addmusic();
    m1.displayplaylist();
    m1.playmusic();
    m1.removemusic();
    return 0;
}
