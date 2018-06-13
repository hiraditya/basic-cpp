#include <iostream>
using namespace std;

class Complex
{
  int re,im;
  public:
    Complex(int x,int y)
    {
      re = x;
      im = y;
    }
    Complex operator +(Complex c)
    {
      Complex ans(this->re+c.re,this->re+c.re);
      return ans;
    }
    void print()
    {
      cout<<re<<" + i"<<im<<endl;
    }
};

int main() {
  Complex c1(2,3),c2(3,2);
  c1.print();
  c2.print();
  Complex result = c1+c2;
  result.print();
  return 0;
}