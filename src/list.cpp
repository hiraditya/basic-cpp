#include <iostream>
#include <list>
#include <iterator>
using namespace std;


int main() {
  list<string> namesList;
  list<string>::iterator it;
  while(1)
  {
    string name;
    cout<<"Enter name(0 to exit): ";
    cin>>name;
    if(name == "0") break;
    namesList.push_back(name);
  }
  namesList.sort();
  for(it=namesList.begin();it!=namesList.end();it++)
  {
    cout<<*it<<"\n";
  }
  return 0;
}