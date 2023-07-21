#include <iostream>
using namespace std;

const double pi = 3.14159265;

// Function Declarations (Prototypes)
double Area(double radius);
double Circumfrance(double radius);

int main()
{
	cout << "Enter radius: ";
	double radius = 0;
	cin >> radius;
	
	// call function "Area"
	cout << "Area is: " << Area(radius) << endl;
	
	// call function "Cicumfrance"
	cout << "Circumfrance is: " << Circumfrance(radius) << endl;
	
	return 0;
}

// Function definitions (implementation)
double Area(double radius)
{
	return pi * radius * radius;
}

double Circumfrance(double radius)
{
	return 2 * pi * radius;
}