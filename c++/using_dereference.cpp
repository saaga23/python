#include <iostream>
using namespace std;

int main()
{
	int age = 10;
	int dogs_age = 9;
	
	cout << "Integer age = " << age << endl;
	
	int* points_to_int = &age;
	cout << "points_to_int points to age" << endl;
	
	// Displaying the value of pointer
	cout << "pointsToInt = " << hex << points_to_int << endl;
	
	// Displaying the value at the pointed location
	cout << "points_to_int = " << dec << *points_to_int << endl;
	
	points_to_int = &dogs_age;
	cout << "points_to_int points to dogAge now" << endl;
	cout << "points_to_int = " <<dec << *points_to_int << endl;
	
	return 0;
}