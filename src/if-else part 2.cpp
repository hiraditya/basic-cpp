#include <iostream>
using namespace std;
int main() {
  int ch1,ch2;
  cout<<"Which one is your favourite\n1.Hollywood\n2.Bollywood\nEnter choice no.. ";
  cin>>ch1;
  if(ch1==1)
  {
    cout<<"Which is your favourite movie\n1.Black Panther\n2.Deadpool\nEnter choice no.. ";
    cin>>ch2;
    if(ch2==1)
    {
      cout<<"Nice choice!";
    }
    else if(ch2==2)
    {
      cout<<"Nice choice!";
    }
    else
    {
      cout<<"Invalid Choice";
    }
  }
  else if(ch1==2)
  {
    cout<<"Which is your favourite movie\n1.Drishyam\n2.3 idiots\nEnter choice no.. ";
    cin>>ch2;
    if(ch2==1)
    {
      cout<<"Nice choice!";
    }
    else if(ch2==2)
    {
      cout<<"Nice choice!";
    }
    else
    {
      cout<<"Invalid Choice";
    }
  }
  else
  {
    cout<<"Invalid Choice";
  }
  return 0;
}