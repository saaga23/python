//cpp program to illustrate the 
// concept of Constructors
#include <iostream>
using namespace std;

class construct
{
public:
	int a, b;
	
	// Default Constructoe
	construct()
	{
		a = 10;
		b = 20;
	}
};

int main()
{
	// Default constructor called automatically
	// when the object is created
	construct c;
	cout << "a: " << c.a << endl;
	cout << "b: " << c.b << endl;
	
	return 0;
}