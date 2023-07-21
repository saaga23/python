#include<iostream>
using namespace std;

void MultipleNumbers ()
{
	cout << "This program will help you multiple two numbers" << endl;
	
	cout <<"Enter the first number: ";
	int firstNumber = 0;
	cin >> firstNumber;
	
	cout << "Enter second number" << endl;
	int secondNumber = 0;
	cin >> secondNumber;
	
	// Multiply two numbers, store result in a variable
	int multiplicationResult = firstNumber * secondNumber;
	
	//Display result
	cout << firstNumber << " x " << secondNumber;
	cout << " = " << multiplicationResult << endl;
	
}
int main()
{
	MultipleNumbers();
	return 0 ;
}