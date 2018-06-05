#include <iostream>
#include <math.h>
using namespace std;

float inRadians(float degrees)
{
  return (degrees*3.14159)/180;
}

int main() {
  float degrees,radians;
  cout<<"Enter an angle in degrees: ";
  cin>>degrees;
  radians = inRadians(degrees);
  cout<<sin(radians)<<endl<<cos(radians)<<endl<<tan(radians);
  return 0;
}