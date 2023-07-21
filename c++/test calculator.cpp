#include <iostream>
#include<string>
using namespace std;

float addition(float num1,float num2){
	float sum;
	sum = num1 + num2;
	return sum;
}

float multiplication(float num1,float num2){
	float mul;
	mul = num1 * num2;
	return mul;
}

float subtraction(float num1,float num2){
	float sub;
	sub = num1 - num2;
	return sub;
}

float division(float num1,float num2){
	float div;
	div = num1 / num2;
	return div;
}

int main(){
	char choice;
	int num1,num2;
	cout << "enter m for multiplication, a for addition ,d for division, s for subtraction: " << endl;
	cin >> choice;
	cout << "enter operands: ";
	cin >> num1;
	cin >> num2;
	
	switch (choice){
		case 'm':
			cout << multiplication(num1,num2) << endl;
			break;
		case 'a':
			cout << addition(num1,num2) << endl;
			break;
		case 'd':
			cout << division(num1,num2) << endl;
			break;
		case 's':
			cout << subtraction(num1,num2) << endl;
			break;
		default:
			cout << "invalid choice" << endl;
	}
	return 0;
}