#include <iostream>
using namespace std;

int main()
{
	string name = "HinDiSiksha";
	for(int i=0;i<name.length();i++)
	{
		if(islower(name[i]))
		{
			name[i] = toupper(name[i]);
		}
	}
	cout<<name;
	return 0;
}