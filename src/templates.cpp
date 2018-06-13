#include <iostream>
using namespace std;

template <typename T>
void mySwap(T &a,T &b)
{
  T t = a;
  a = b;
  b = t;
}


int main() {
  int a=2,b=5;
  string s1="Hindisiksha", s2="Tutorial";
  mySwap<int>(a,b);
  mySwap<string>(s1,s2);
  cout<<a<<" "<<b<<endl;
  cout<<s1<<" "<<s2<<endl;
  return 0;
}