#include <iostream>
using namespace std;
int main()
{
	int radius = 0,area =0,circumfrance = 0;
	cout<< "Enter a value for radius" << endl;
	cin >> radius;
	area= ((radius * radius) * (22.0/7));
	circumfrance=2*(area);
	cout << "radius is " << radius << "\nArea is " <<area << "\ncircumfrance is "<<circumfrance <<endl;
	return 0;
	
}