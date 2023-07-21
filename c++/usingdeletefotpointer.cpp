#include <iostream>
using namespace std;

int main()
{
	// Request for memory spce for an int
	int* points_to_age = new int;
	
	// use the allocated memory to store a number
	cout << "Enter your dog: ";
	cin >> *points_to_age;
	
	// use indirection operator* to access value
	cout << "Age" << *points_to_age << " is stored at " << hex << points_to_age << endl;
	
	delete points_to_age; // release memory / memory deallocation
	
	return 0;
}