#include <iostream>
using namespace std;

class Character{
    
protected:
    int characterID;
    int level;
    int healthPoints;
    string name;

public:
    Character(){
        cout<<"Enter ID:";
        cin>>characterID;
        cout<<"Enter Name:";
        cin>>name;
        cout<<"Enter Level:";
        cin>>level;
        cout<<"Enter HP:";
        cin>>healthPoints;
    }
    virtual void attack(){
        cout<<name<<" attacks!"<<endl;
    }
    virtual void defend(){
        cout<<name<<" defends!"<<endl;
    }

    virtual void displayStats(){
        cout<<"\nID:"<<characterID<<" Name:"<<name<<" Level:"<<level<<" HP:"<<healthPoints<<endl;
    }
};

class Warrior:public Character{
    int armorStrength;
    int meleeDamage;

public:
    Warrior(){
        cout<<"Enter Armor Strength:";
        cin>>armorStrength;
        cout<<"Enter Melee Damage:";
        cin>>meleeDamage;
    }

    void attack() override{
        cout<<name<<" strikes! Damage:"<<meleeDamage<<endl;
    }
};

class Mage:public Character{
    int manaPoints;
    int spellPower;

public:
    Mage(){
        cout<<"Enter Mana Points:";
        cin>>manaPoints;
        cout<<"Enter Spell Power:";
        cin>>spellPower;
    }

    void defend()override{
        cout<<name<<" casts barrier! Power:"<<spellPower<<endl;
    }
};

class Archer:public Character{
    int arrowCount;
    int rangedAccuracy;

public:
    Archer(){
        cout<<"Enter Arrows:";
        cin>>arrowCount;
        cout<<"Enter Accuracy:";
        cin>>rangedAccuracy;
    }

    void attack()override{
        cout<<name<<" shoots! Accuracy:"<<rangedAccuracy<<"%"<<endl;
    }
};

class Rogue:public Character{
    int stealthLevel;
    int agility;

public:
    Rogue(){
        cout<<"Enter Stealth:";
        cin>>stealthLevel;
        cout<<"Enter Agility:";
        cin>>agility;
    }

    void displayStats()override{
        Character::displayStats();
        cout<<"Stealth:"<<stealthLevel<<" Agility:"<<agility<<endl;
    }
};

int main() {
    Warrior w;
    w.attack();
    Mage m;
    m.defend();
    Archer a;
    a.attack();
    Rogue r;
    r.displayStats();

    return 0;
}
