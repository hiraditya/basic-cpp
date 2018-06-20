#include <iostream>
#include <thread>
#include <future>
using namespace std;

int factorial(future<int>& f)
{
	int n = f.get();
	int res = 1;
	for(int i=1;i<=n;i++)
	{
		res = res * i;
	}
	cout<<"Result: "<<res<<endl;
	return res;
}

int main() {
	int fac;
	promise<int> prom;
	future<int> f = prom.get_future();
	// thread t(factorial,5,ref(fac));
	future<int> fu = async(launch::async,factorial,ref(f));
	
	//....

	prom.set_value(6);

	fac = fu.get();
	cout<<fac<<endl;
	// t.join();
	return 0;
}