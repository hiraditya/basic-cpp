#include <iostream>
using namespace std;

class Person
{
  public:
    string name;
    int age;
    float weight;
};

int main() {
  Person p1;
  cout<<"Enter your name, age and weight: ";
  cin>>p1.name>>p1.age>>p1.weight;
  cout<<p1.name<<" "<<p1.age<<" "<<p1.weight;
  return 0;
}