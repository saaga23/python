#include <iostream>
#include<string>
using namespace std;

int func_squa(int num){
	num = num * num;
	return num;
}

int main(){
	int num1;
	cout << "enter an integer value to get its square\n";
	cin >> num1;
	cout << func_squa(num1) << endl;
	return 0;
}