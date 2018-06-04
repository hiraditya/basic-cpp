#include <iostream>
using namespace std;

int main() {
  const int i = 5;//fine
  const int j = i + 5;//fine
  const int k;//compiler error not initialized
  i++;//compiler error can't change constant variable
  return 0;
}