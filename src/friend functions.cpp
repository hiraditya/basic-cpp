#include <iostream>
using namespace std;

class User
{
  string userId,pass;
  public:
    User(string u,string p)
    {
      userId = u;
      pass = p;
    }
    friend void printDetails(User ob);
};

void printDetails(User ob)
{
  cout<<ob.userId<<" "<<ob.pass<<endl;
}

int main() {
  User u1("abcd","1234");
  printDetails(u1);
  return 0;
}