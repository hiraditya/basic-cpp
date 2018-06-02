#include <iostream>
using namespace std;

int main() {
  float n;
  cout<<"Enter a number: ";
  cin>>n;
  int ch;
  do
  {
    cout<<"Number: "<<n<<endl;
    cout<<"1.Square\n2.Cube\n3.Inverse\n4.Exit\n";
    cin>>ch;
    if(ch==1)
    {
      n = n*n;
    }
    else if(ch==2)
    {
      n = n*n*n;
    }
    else if(ch==3)
    {
      n = 1/n;
    }
  }
  while(ch!=4);
  return 0;
}