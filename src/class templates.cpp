#include <iostream>
using namespace std;

template <class T>
class Item
{
  T data;
  public:
    Item(T x)
    {
      data = x;
    }
    void setData(T x)
    {
      data = x;
    }
    void print()
    {
      cout<<data<<endl;
    }
};

int main() {
  Item<int> ob(4);
  ob.print();
  Item<string> ob2("Hindisiksha");
  ob2.print();
  ob.setData(10);
  ob.print();
  return 0;
}