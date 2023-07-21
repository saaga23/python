#include <iostream>
#include <string>

using namespace std;

int main()
{
	string greetstring ("Hello std::string! ");
	string firstLine;
	getline(cin, firstLine);
	
	cout << "Enter another: " << endl;
	string secondLine;
	getline(cin, secondLine);
	
	cout << "Result of concentration: " << endl;
	string concatString = firstLine + " " + secondLine;
	cout << concatString << endl;
	
	cout <<"Copy of concatenated string: " << endl;
	string aCopy;
	aCopy = concatString;
	cout << aCopy << endl;
	
	cout << "Length of concat string: " << concatString.length() << endl;
	
	return 0;
}