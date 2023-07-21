#include <iostream>
using namespace std;

const double pi = 3.1416;

// output parameter result by referance
void Area(double radius, double& result)
{
	result = pi * radius * radius;
}
int main()
{
	cout << "Enter radius: ";
	double radius = 0;
	cin >> radius;
	
	double areaFetched= 0;
	Area(radius, areaFetched);
	
	cout << "The area is: " << areaFetched << endl;
	return 0;
}