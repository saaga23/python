#include <iostream>
using namespace std;

// defines an inline function that doubles
inline long DoubleNum (int inputNum)
{
	return inputNum * 2;
}

int main()
{
	cout << "Enter an integer: ";
	int inputNum = 0;
	cin >> inputNum;
	
	// callinline function
	cout << "Double is: " << DoubleNum(inputNum) << endl;
	
	return 0;
}