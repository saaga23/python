#include <iostream>
#include <string>
using namespace std;

int main()
{
	string text = "This is a test";
	text.replace (5, 2, "was");
	cout << text;
	return 0;
}