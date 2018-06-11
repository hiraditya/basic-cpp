#include <iostream>
using namespace std;

class Sample
{
  int i,j;
    public:
      Sample(int x,int y)
      {
        i = x;
        j = y;
      }
      Sample(Sample &S)
      {
        i = S.i;
        j = S.j;
      }
      void show()
      {
        cout<<i<<" "<<j<<endl;
      }
};

int main() {
  Sample S1(2,3);
  Sample S2(S1);//Copy Constructor
  S1.show();
  S2.show();
  return 0;
}