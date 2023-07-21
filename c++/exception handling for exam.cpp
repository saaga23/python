#include <iostream>
#include<string>
#include<windows.h>
using namespace std;

int main(){
	int num1;
	int num2;
	cin >> num1;
	cin >> num2;
	
	try {
		if(num2 == 0)
		{
			throw num2;
		}
		else 
		{
			cout << num1/ num2 << endl;
		}
	}
	catch (int num2)
	{
		cout << "you cant divide by zero";
	}
	
	return 0;
}