#include <iostream>
using namespace std;

int main()
{
	start:
		int num1 = 0, num2 = 0;
		
		cout << "Enter two integers: " << endl;
		cin >> num1;
		cin >> num2;
		
		cout << num1 << " x " << num2 << " = " << num1 * num2 << endl;
		cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
		
		cout << "Do you wish to perform operation (y/n)?" << endl;
		char repeat = 'y';
		cin >> repeat;
		
		if (repeat == 'y')
			goto start;
			
		cout << "goodbye!" << endl;
		
		return 0;
}