#include <iostream>
using namespace std;
const double pi = 3.14159265;

void QueryAndCalculate()
{
	cout << "Enter radius: ";
	double radius = 0;
	cin >> radius;
	
	cout << "Area: " << (pi * radius * radius) << endl;
	
	cout << "Do you wish to calculate circumfrance (y/n)? ";
	char calcCircum = 'n';
	cin >> calcCircum;
	
	if (calcCircum == 'n')
		return;
		
	cout<< "Circumfrance: " << 2 * pi * radius << endl;
	return;
}

int main()
{
	QueryAndCalculate ();
	
	return 0;
}