#include <iostream>
using namespace std;

int main() {
  int n = 6;
  while(1)
  {
    int num;
    cout<<"Guess the number: ";
    cin>>num;
    if(num == n)  break;
    else if(num<n)
      cout<<"Lower\n";
    else
      cout<<"Higher\n";
  }
  return 0;
}