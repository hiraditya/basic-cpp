#include <iostream>
using namespace std;

class A
{
  int b;
  public:
    A(int x)
    {
      b=x;
      cout<<"Constructing ob"<<b<<endl;
    }
    ~A()
    {
      cout<<"Destroying ob"<<b<<endl;
    }
};

int main() {
  A ob1(1);
  A ob2(2);
  A ob3(3);
  return 0;
}