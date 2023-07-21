#include<iostream>
using namespace std;

const double pi = 3.14159265;

auto Area(double radius)
{
	return pi * radius * radius;
}

int main()
{
	cout << "Enter radius: ";
	double radius = 0;
	cin >> radius;
	
	// call function "Area"
	cout << "Area is: " << Area(radius) << endl;
	return 0;
}