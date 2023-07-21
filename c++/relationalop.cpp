#include<iostream>
using namespace std;

int main()
{
	cout << "Enter two integers: " << endl;
	int num1 = 0, num2 = 0;
	cin >> num1;
	cin >> num2;
	
	bool isEqual = (num1 == num2);
	cout << "Result of equality test; " << isEqual << endl;
	
	bool isunEqual = (num1 != num2);
	cout << "Result of inequality test; " << isunEqual << endl;
	
	bool isGreaterThan = (num1 > num2);
	cout << "Result of greater than" <<isGreaterThan << endl;
	
	bool isGreaterThanEquals = (num1 >= num2);
	cout <<"Result of greater than or equal to" <<isGreaterThanEquals <<endl;
	
	return 0;
}