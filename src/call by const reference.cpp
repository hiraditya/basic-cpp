#include <iostream>
using namespace std;

void print(const string &addr)
{
  //addr = "XYZ";
  cout<<"In print func: "<<addr<<endl;
}

int main() {
  string addr = "ABC";
  cout<<addr<<endl;
  print(addr);
  cout<<addr<<endl;

  return 0;
}