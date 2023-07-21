#include <iostream>
using namespace std;

int main()
{
	int age = 30;
	const double pi = 3.1416;
	
	// use & to find the address in memory
	cout << "Integer is located at: 0x" <<&age << endl;
	cout << "Double pi is located at:  0x" <<&pi << endl;
	
	return 0;
}