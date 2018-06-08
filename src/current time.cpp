#include <iostream>
#include<ctime>
using namespace std;

int main() {
  time_t t = time(0); //get calender time
  tm* tmp = localtime(&t); //get localtime time
  cout<<tmp->tm_hour<<":"<<tmp->tm_min<<":"<<tmp->tm_sec;
  return 0;
}