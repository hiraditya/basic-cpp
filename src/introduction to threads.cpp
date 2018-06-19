#include <iostream>
#include <thread>
using namespace std;

void func(int i)
{
  cout<<"Hello, Multithreading "<<i<<endl;
}

int main() {
  thread t1(func,1);//t1 thread start
  t1.join();//main thread will wait for t1 to complete its task
  // t1.detach();

  if(t1.joinable())
    t1.join();
  return 0;
}