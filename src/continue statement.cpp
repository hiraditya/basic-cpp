#include <iostream>
using namespace std;

int main() {
  int i=0;
  while(i<5)
  {
    int n;
    cout<<"Enter a positive integer: ";
    cin>>n;
    i++;
    if(n<=0)
      continue;
  }
  return 0;
}