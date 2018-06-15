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
};


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
  return 0;
}