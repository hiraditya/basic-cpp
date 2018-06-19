#include <iostream>
#include <cassert>
using namespace std;

void square(int* p)
{
  assert(p!=NULL);
  (*p) = (*p)*(*p);
}

int main() {
  int a = 5;
  int *p = &a;
  square(p);
  cout<<a;
  return 0;
}