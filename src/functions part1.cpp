#include <iostream>
using namespace std;

float bmi(float w,float h)
{
  float bmi;
  bmi = w/(h*h);
  return bmi;
}

int main() {
  float w,h;
  cout<<"Enter your weight(kg) and height(m): ";
  cin>>w>>h;
  float bm;
  bm = bmi(w,h);
  cout<<"BMI: "<<bm;
  return 0;
}