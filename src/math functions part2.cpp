#include <iostream>
using namespace std;

int main() {
  int a,b;
  cout<<"Enter a and b: ";
  cin>>a>>b;
  for(int i=min(a,b)+1;i<max(a,b);i++)
  {
    cout<<i<<" ";
  }
  return 0;
}