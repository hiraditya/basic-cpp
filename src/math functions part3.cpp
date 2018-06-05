#include <iostream>
#include <math.h>
using namespace std;

int main() {
  float a,p,r,n,t,c;
  cout<<"Enter p, r, n,t\n";
  cin>>p>>r>>n>>t;
  a = p*pow((1+(r/n)),n*t);
  c = a - p;
  cout<<"Amount: "<<a<<endl;
  cout<<"C.I: "<<c<<endl;
  return 0;
}