#include <iostream>
using namespace std;

float interest(float principle,int time,float rate=0.10)
{
  return principle*rate*time;
}

int main() {
  cout<<interest(5400,2)<<endl; //function call without third parameter
  cout<<interest(5400,2,0.20); //function call with all the parameter
  return 0;
}