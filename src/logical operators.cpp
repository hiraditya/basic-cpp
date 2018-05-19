#include <iostream>
using namespace std;
int main() {
  cout<<((5<2) || (2>1))<<endl; //NOT operator
  cout<<((5<2) && (2>1))<<endl; //AND operator
  cout<<!((5<2) && (2>1))<<endl; //NOT operator
  return 0;
}