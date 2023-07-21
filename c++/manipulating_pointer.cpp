#include <iostream>
using namespace std;

int main()
{
	int dogsAge = 30;
	cout << "Initialized dogsAge = " << dogsAge << endl;
	
	int *points_to_age = &dogsAge;
	cout << "point_to_age points to dogsAge" << endl;
	
	cout << "Enter an age for your dog: ";
	
	// store input at the memory pointed to by points_to_age
	cin >> *points_to_age;
	
	// Displaying the address where age is stored
	cout << "Input stored at " << hex << points_to_age << endl;
	
	cout << "Integer dogsAge = " << dec << dogsAge << endl;
	
	return 0;
}