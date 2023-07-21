#include <iostream>
using namespace std;

int main()
{

	int numsToCalculate = 0;
	cout << "Thisprogram will calculate " << numsToCalculate \
		 << " Fibonacci Numbers at a time" << endl;
	cout << "Input where you want the series to end" << endl;
	cin >> numsToCalculate;
		 
	int num1 = 0, num2 = 1;
	char wantMore ='\0';
	cout << num1 << " " << num2 << " ";
	
	do
	{
		for (int counter = 0; counter < numsToCalculate; ++counter)
		{	
			cout << num1 + num2 << " ";
		
			int num2Temp = num2;
			num2 = num1 + num2;
			num1 = num2Temp;
		}
	
		cout << endl << "Do you want more numbers (y/n)? ";
		cin >> wantMore;
	}while (wantMore == 'y');

	cout << "Goodbye!" << endl;

	return 0;
}
