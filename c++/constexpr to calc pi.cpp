#include <iostream>
constexpr double Getpi() { return 22.0 / 7; }
constexpr double Twicepi () { return 2 * Getpi(); }

int main ()
{
	using namespace std;
	const double pi = 22.0 / 7;
	
	cout << "constant pi containe value " << pi << endl;
	cout << "constexpr Getpi() returns value " << Getpi() << endl;
	cout << "constexpr Twicepi () returns value " << Twicepi () << endl;
	
	return 0;
}