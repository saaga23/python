#include <iostream>
using namespace std;

const double pi = 3.14159265;

double Area(double radius); // for circle
double Area(double radius, double height); // for cylinder

int main()
{
	cout << "Enter z for cylinder, c for circle: ";
	char userSelection ='z';
	cin >> userSelection;
	
	cout << "Enter radius: ";
	double radius = 0;
	cin >> radius;
	
	if (userSelection == 'z')
	{
		cout << "Enter height: ";
		double height = 0;
		cin >> height;
		
		// Invoke overloaded variant of Area of cyclinder
		cout << "Area of cylinder is: " << Area (radius, height) << endl;
		
	}
	else
		cout << "Area of cylinder is: " << Area (radius) << endl;
	return 0;	
}

// for circle
double Area(double radius)
{
	return pi * radius * radius;
}

// overloaded for cylinder
doubleArea (double radius, double height)
{
	// reuse the area of circle
	return 2 * Area (radius) + 2 * pi * radius * height;
}