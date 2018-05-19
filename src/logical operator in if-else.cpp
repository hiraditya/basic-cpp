#include <iostream>
using namespace std;
int main() {
  int age;
  char grade;
  cout<<"Enter your age and grade\n";
  cin>>age>>grade;
  if(((age>18)&&(age<30)) || (grade=='A'))
  {
    cout<<"Eligible for Exam";
  }
  else
  {
    cout<<"Not eligible";
  }
  return 0;
}