#include <iostream>
using namespace std;

class Account
{
  string user_id,password;
  public:
    string account_no,name;
    void getDetails();
    void showDetails()
    {
      cout<<account_no<<" "<<name<<endl;
    }
};

void Account::getDetails()
{
  cout<<"Enter your account_no and name: ";
  cin>>account_no>>name;
}

int main() {
  Account a;
  a.getDetails();
  a.showDetails();
  return 0;
}