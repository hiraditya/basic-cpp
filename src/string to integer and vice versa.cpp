#include <iostream>
#include <string.h>
using namespace std;

int main()
{
	string a = "40", b = "30";
	int i = stoi(a), j = stoi(b);
	int sum = i + j;
	string answer = to_string(sum);
	cout<<answer;
	return 0;
}