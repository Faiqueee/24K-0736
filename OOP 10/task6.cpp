#include<iostream>
#include<fstream>
#include<cstring> 
using namespace std;

struct InventoryItem {
int itemID;
char itemName[20];
};

int main() {
InventoryItem itemOut;
itemOut.itemID=101;
strcpy(itemOut.itemName,"PowerBank");

ofstream fout("inventory.dat",ios::binary);
if(!fout) {
cerr<<"Write error\n";
return 1;
}
fout.write(reinterpret_cast<char*>(&itemOut),sizeof(itemOut));
fout.close();

InventoryItem itemIn;
ifstream fin("inventory.dat",ios::binary);
if(!fin) {
cerr<<"Read error\n";
return 1;
}
fin.read(reinterpret_cast<char*>(&itemIn),sizeof(itemIn));
fin.close();

cout<<"ID:"<<itemIn.itemID<<endl;
cout<<"Name:"<<itemIn.itemName<<endl;

return 0;
}
