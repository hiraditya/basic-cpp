#include <iostream>
#include <thread>
#include <future>
using namespace std;

A{
public:
	void f(int x){cout<<x<<endl;}
	int operator () (int x){return x;}
};

void func(int x) {}

int main() {
	A a;

	thread t1(a,5);//copy of a()
	thread t2(ref(a),5);//a()
	thread t3(move(a),5); //a is no longer usable in main thread
	thread t4(A(),5);//temp A

	thread t5([](int x) {return x*x;},5);

	thread t6(&A::f,a,5);//copy of a.f(5)
	thread t7(&A::f,&a,5);//a.f(5)	
	thread t8(func,5);

	// thread t(a,5);//copy_of a()
	// async(launch::async,a,5);
	// bind(a,5);
	// call_once(once_flag,a,5);
	return 0;
}