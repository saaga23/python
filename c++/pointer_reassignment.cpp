#include <iostream>
using namespace std;

int main()
{
	int age = 30;
	int* points_to_int = &age;
	cout << "pointsToInt points to age now" <<endl;
	
	// Displaying the value of pointer
	cout << "pointstoint = 0x" << hex << points_to_int << endl;
	
	int dogsAge = 9;
	points_to_int = &dogsAge;
	cout << "pointsToInt points to dogsAge now" << endl;
	
	cout << "pointsToInt = " << hex << points_to_int << endl;
	
	return 0;
}