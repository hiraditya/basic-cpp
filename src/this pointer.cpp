#include <iostream>
using namespace std;

class Box
{
  int l,b,h;
  public:
    Box(int l,int b,int h)
    {
      this->l = l;
      this->b = b;
      this->h = h;
    }
    void show()
    {
      cout<<l<<" "<<b<<" "<<h;
    }
};

int main() {
  Box b1(1,2,3);
  b1.show();
  return 0;
}