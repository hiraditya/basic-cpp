#include <iostream>
#include <thread>
#include <mutex>
#include <fstream>
using namespace std;

class LogFile
{
	mutex mu;
	ofstream f;
public:
	LogFile()
	{
		// f.open("log.txt");
	}
	void print(string msg)
	{
		if(!f.is_open())
		{
			f.open("log.txt");//Lazy initialization
		}
		// lock_guard<mutex> guard(mu);
		unique_lock<mutex> locker(mu,defer_lock);
		locker.lock();
		f<<msg<<endl;
		locker.unlock();

		cout<<msg<<endl;

		// unique_lock<mutex> locker2 = move(locker);
		// locker.lock();		
	}
	~LogFile()
	{
		if(f.is_open())
			f.close();
	}
};

int main() {
	LogFile file;
	file.print("Eat, Sleep, Code.");
	return 0;
}