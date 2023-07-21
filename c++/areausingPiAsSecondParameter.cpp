#include <iostream>
using namespace std;

// Function Declarations (Prototypes)
double Area(double radius, double pi = 3.14);

int main()
{
	cout << "Enter radius: ";
	double radius = 0;
	cin >> radius;
	
	cout <<"pi is 3.14, do you wish to change this (y / n)? ";
	char changepi = 'n';
	cin >> changepi;
	
	double circleArea= 0;
	if (changepi == 'y')
		{
			cout << "Enter new pi: ";
			double newpi = 3.14;
			cin >> newpi;
			circleArea = Area (radius, newpi);
		}
	else
		circleArea = Area(radius); // Ignore 2nd param, use default value
		
		// calll function "Area"
		cout <<"Area is: " << circleArea << endl;
		
	return 0;
}

// Function definations (implementations)
double Area(double radius, double pi)
{
	return (pi * radius * radius);
}