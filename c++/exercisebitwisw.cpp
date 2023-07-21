#include <iostream>
using namespace std;
main()
{
	cout << " Enter first boolean expression" << endl;
	int num1 = 0;
	cin >> num1;
	
	cout << " Enter second boolean expression " << endl;
	int num2 = 0;
	cin >> num2;
	
	cout << " Result pf num1 |= num2 : " << (num1 |= num2 )<< endl;
	cout << " Resilt of num1 &= num2 : " << (num1 &= num2) << endl;
	cout << " Result of num1 ^= num2 : " << (num1 ^= num2) << endl;
	cout << " Result of num1 ~= num2 : " << (~num1,~num2) << endl;
	
	return 0 ;
}