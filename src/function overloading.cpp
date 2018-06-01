#include <iostream>
using namespace std;

float area(int a)
{
  return a*a;
}

float area(int a,int b)
{
  return a*b;
}

int main() {
  cout<<area(5)<<endl<<area(5,2);
  return 0;
}