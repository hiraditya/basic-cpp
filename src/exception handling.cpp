#include <iostream>
using namespace std;

int main() {
  int a,b;
  float res=-1;
  cout<<"Enter two numbers: ";
  cin>>a>>b;
  try{
    if(b==0)  throw(0);
    res = a/b;
  }
  catch(int i)
  {
    cout<<"Divide by Zero\n";
  }
  cout<<"Result: "<<res<<endl;
  return 0;
}