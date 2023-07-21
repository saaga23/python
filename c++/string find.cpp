#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str;
	getline(cin, str);
	if (str.find (' ') !=string::npos)
	{
		cout << "contains at least one space!" << endl;
		
	}
	else
	{
		cout << "Does not contain any spaces!" << endl;
	}
}