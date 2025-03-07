#include <iostream>
using namespace std;


class Level {
    int num;
    string diff;
public:
    Level() {
    cout<<"Enter Level Number:";
    cin>>num;
    cout<<"Enter Difficulty:";
     cin>>diff;
    }
    void show() {
cout<<"Level "<<num<<" | Difficulty: "<<diff<<endl;
    }
};

class Game {
    string title,genre;
    Level *lvls;
    int count;
public:
    Game() {
        
      cout<<"Enter Game Title:";
        cin>>title;
        cout<<"Enter Genre:";
        cin>>genre;
        cout<<"Number of Levels:";
        cin>>count;
        lvls=new Level[count];
    }

    ~Game() {
        delete[] lvls;
    }
    void show() {
        cout<<endl<<"Game: "<<title<<" | Genre: "<<genre<<endl<<"Levels:"<<endl;
        for(int i=0;i<count;i++) lvls[i].show();
    }
};

int main() {
    Game g;
    g.show();
    return 0;
}
