#include <iostream>
using namespace std;

class Integer
{
  int num;
    public:
      Integer()
      {
        num = 0;
      }
      void print()
      {
        cout<<num<<endl;
      }
      void operator () (int val)
      {
        num += val; //num = num + val
      }
};

int main() {
  Integer a;
  a.print();
  a(2);//Functor
  a.print();
  a(8);
  a.print();
  return 0;
}