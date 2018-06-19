#include <iostream>
#include <thread>
#include <mutex>
using namespace std;

mutex mu1,mu2;

int data=0;

void func1(int x)
{
	lock(mu1,mu2);
	lock_guard<mutex> guard1(mu1,adopt_lock);
	cout<<x<<endl;


	lock_guard<mutex> guard2(mu2,adopt_lock);
	data++;
}


void func2(int x)
{
	lock(mu1,mu2);
	lock_guard<mutex> guard1(mu2,adopt_lock);
	cout<<x<<endl;


	lock_guard<mutex> guard2(mu1,adopt_lock);
	data++;
}

int main() {
	thread t1(func1,1);

	func2(2);
	t1.join();
	return 0;
}