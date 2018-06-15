#include <iostream>
#include <fstream>
using namespace std;

int main() {
  string msg;
  msg = "Welcome to Hindisiksha\nHere we learn and grow";
  ofstream fout("file.txt");
  fout<<msg;
  fout.close();
  ifstream fin("file.txt");
  while(!fin.eof())
  {
    getline(fin,msg);
    cout<<msg<<endl;
  }
  fin.close();
  return 0;
}