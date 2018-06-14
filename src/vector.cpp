#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int> vec;
  while(1)
  {
    int a;
    cout<<"Enter a number(negative to exit)\n";
    cin>>a;
    if(a<0) break;
    vec.push_back(a);
  }
  for(int i=0;i<vec.size();i++)
  {
    cout<<vec[i]<<" ";
  }
  return 0;
}