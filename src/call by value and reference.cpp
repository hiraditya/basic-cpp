#include <iostream>
using namespace std;

void swap(int &p,int &q) //call by reference
{
  int temp = p;
  p = q;
  q = temp;
  cout<<"In swap func: "<<p<<" "<<q<<endl;
}

int main() {
  int a=5, b=10;
  cout<<a<<" "<<b<<endl;
  swap(a,b);
  cout<<a<<" "<<b<<endl;
  return 0;
}