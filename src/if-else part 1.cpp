#include <iostream>
using namespace std;
int main() {
  int age;
  cout<<"what is your age?\n";
  cin>>age;
  if(age>=18) 
  {
    cout<<"Eligible for vote\n";
  }
  else
  {
    cout<<"Not eligible for vote\n";
  }
  return 0;
}