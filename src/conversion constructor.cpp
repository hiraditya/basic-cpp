#include <iostream>
using namespace std;

class A
{
  int a;
  public:
    A(int x)
    {
      a = x;
    }
    void show()
    {
      cout<<"a: "<<a<<endl;
    }
};

int main() {
  A ob(1);
  ob.show();
  int n = 2;
  ob = n; //Conversion Constructor
  ob.show();
  return 0;
}