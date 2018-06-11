#include <iostream>
using namespace std;

class A
{
  public:
    virtual void show()
    {
      cout<<"In A class\n";
    }
};

class B:public A
{
  public:
    void show()
    {
      cout<<"In B class\n";
    }
};

int main() {
  A* p;
  B ob;
  p = &ob;
  p->show();// Runtime Polymorphism
  return 0;
}