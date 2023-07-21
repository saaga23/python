#include <iostream>
using namespace std;

// Declare a function
int DemoConsoleOutput();

int main()
{
	// call i.e. invoke the fumction 
	DemoConsoleOutput () ;
	
	return 0;
}
// Define i.e. important the previously declared function
int DemoConsoleOutput ()
{
	cout << "This is a simple string literal" << endl;
	cout << "Writing number five: " << 5 << endl;
	cout << "Performing dividion 10 / 5 = " << 10 / 5 << endl;
	cout << "Pi when approximated is 22 / 7 = " << 22 / 7 << endl;
	cout << "pi is 22 / 7 = " << 22.0 / 7 << endl;
	
	return 0;
}