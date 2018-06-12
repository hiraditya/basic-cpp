#include <iostream>
using namespace std;

class Parent
{
  int a;
  public:
    int b;
  protected:
    int c;
};

class Child:protected Parent
{
  public:
    Child()
    {}
    Child(int x,int y)
    {
      b = x;
      c = y;
    }
    void print()
    {
      cout<<b<<" "<<c<<endl;
    }
};

class GrandChild:public Child
{
  public:
    GrandChild(int x,int y)
    {
      b = x;
      c = y;
    }
    void print()
    {
      cout<<b<<" "<<c<<endl;
    }
};

int main() {
  Child c1(3,4);
  GrandChild g1(5,6);
  // c1.print();
  g1.print();
  return 0;
}