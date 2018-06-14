#include <iostream>
#include <fstream>
using namespace std;

int main() {
  ofstream fout("log.txt",ios::app);
  string msg = "Welcome to Hindisiksha";
  fout<<msg;
  fout.close();
  ifstream fin("log.txt");
  string msg;
  while(!fin.eof())
  {
    fin>>msg;
    cout<<msg<<" ";
  }
  fin.close();
  return 0;
}