#include <iostream>
using namespace std;
constexpr int square(int number ){return number*number; }

int main()
{
	const int ARRAY_LENGTH = 5;
	// Array of 5 integers, initialized using a const
	int myNumbers [ARRAY_LENGTH] = {5, 10, 0, -101, 20};
	
	//using a constexpr for array of 25 integers
	int moreNumbers [square(ARRAY_LENGTH)] ;
	
	cout << "Enter index of the element to be changed: ";
	int elementIndex = 0;
	cin >>elementIndex;
	
	cout << "Enter new value: ";
	int newValue = 0;
	cin >> newValue;
	
	myNumbers[elementIndex] = newValue;
	moreNumbers[elementIndex] = newValue;
	
	cout << "Element " << elementIndex << " in array myNumbers is: ";
	cout << myNumbers[elementIndex] << endl;
	
	cout << "Element " << elementIndex << " in array moreNumbers is: ";
	cout << moreNumbers[elementIndex] << endl;
	
	return 0;
}