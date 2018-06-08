#include <iostream>
using namespace std;

class A
{
  int b;
  public:
    A()
    {
      b = 10;
    }
    A(int x)
    {
      b = x;
    }
};

int main() {
  A ob1(1);
  A ob2;
  return 0;
}