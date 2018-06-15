#include <iostream>
#include <fstream>
using namespace std;

class Mobile
{
  string brand,model;
  int price;
  public:
    void setDetails()
    {
      cout<<"Enter Brandname and model: ";
      cin>>brand>>model;
      cout<<"Enter price: ";
      cin>>price;
    }
    void showDetails()
    {
      cout<<brand<<" "<<model<<" "<<price<<endl;
    }
    friend ofstream& operator << (ofstream& write,Mobile& mob);
    friend ifstream& operator >> (ifstream& read,Mobile& mob);
};

ifstream& operator >> (ifstream& read,Mobile& mob)
{
  read>>mob.brand;
  read>>mob.model;
  read>>mob.price;
  return read;
}

ofstream& operator << (ofstream& write,Mobile& mob)
{
  write<<mob.brand<<" "<<mob.model<<" "<<mob.price<<endl;
  return write;
}

int main() {
  Mobile mob;
  mob.setDetails();
  ofstream fout("data.txt");
  fout<<mob;
  fout.close();
  ifstream fin("data.txt");
  fin>>mob;
  mob.showDetails();
  fin.close();
  return 0;
}