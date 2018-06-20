#include <iostream>
#include <thread>
#include <mutex>
#include <condition_variable>
using namespace std;

int item = 0;
mutex mu;
condition_variable consume,produce;

void consumer()
{
	unique_lock<mutex> lck(mu);
	while(item==0)	consume.wait(lck);
	cout<<item<<endl;
	item=0;
	produce.notify_one();
}

void producer(int id)
{
	unique_lock<mutex> lck(mu);
	while(item!=0)	produce.wait(lck);
	item = id;
	consume.notify_one();
}

int main() {
	thread consumers[10],producers[10];
	for (int i = 0; i < 10; ++i)
	{
		consumers[i] = thread(consumer);
		producers[i] = thread(producer,i+1);
	}

	for (int i = 0; i < 10; ++i)
	{
		consumers[i].join();
		producers[i].join();
	}
	return 0;
}