#include <iostream>
using namespace std;

int main() {
  int n,res=1;
  cout<<"Enter the number: ";
  cin>>n;
  //Factorial using for loop
  for(int i=1;i<=n;i++)
  {
    res = res*i;
  }
  cout<<res;
  return 0;
}