#include<iostream> //must be included to start every program, library that contains input and output functions
#include<string> //library that contains all string in the program, including string length
using namespace std; //used for 

float average(float a,float b,float c){ //
	float sum;
	float avg;
	sum = a + b + c;
	avg = sum/3;
	return avg;
}
int main(){
	string name;
	cout << "Enter name" << endl;
	cin >> name;
	cout << name << endl;
	cout << average(4,3,1) << endl;
	
	int temp;
	cout << "Enter a number" << endl;
	cin >> temp;
	if (temp == 1)
		{
			cout << "number entered is 1:" << endl;
		}
	else
		{
			cout << "number is not 1" << endl;
		}
	return 0;
}