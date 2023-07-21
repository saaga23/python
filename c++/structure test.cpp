#include <iostream>
#include <string>
using namespace std;

int main() {
	struct {
		int myNum;
		string MyString;
	} myStructure;
	
	myStructure.myNum =1;
	myStructure.MyString = "Hello World";
	cout << myStructure.myNum << "\n";
	cout << myStructure.MyString << "\n";
	return 0;
}