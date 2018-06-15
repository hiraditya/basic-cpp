#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;

int main() {
  string msg;
  ofstream fout("log.txt",ios::app);
  msg = "Welcome to Hindisiksha\nHere we learn ad grow";
  fout<<msg;
  fout.close();
  ifstream fin("log.txt");
  while(!fin.eof())
  {
    fin>>msg;
    cout<<msg<<" ";
  }
  fin.close();
  return 0;
}