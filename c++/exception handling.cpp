#include <iostream>
using namespace std;

int main() {
	try {
		int age = 15;
		if (age >= 18) {
			cout << "Access granted - Youy are old enough.";
			
		}
		else {
			throw (age);
			
		}
	}
	catch (int myNum) {
		cout << "Access denied - you must be at least 18 years old. \n";
		cout << "Age is: "<< myNum; 
	}
	return 0;
}