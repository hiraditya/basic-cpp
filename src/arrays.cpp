#include <iostream>
using namespace std;

int main() {
  int marks[5];
  float avg,sum=0.0;
  for(int i=0;i<5;i++)
  {
    cout<<"Enter marks of "<<i+1<<" student: "<<endl;
    cin>>marks[i];
    sum = sum + marks[i];
  }
  avg = sum/5;
  cout<<"Average: "<<avg<<endl;
  return 0;
}