#include <iostream>
#include <string>
using namespace std;

int main() {
	int choice;
	cout << "enter your choice " << endl;
	cin >> choice;
	switch(choice){
	case 1:
		{
			cout << "choice == 1" << endl;
		}
		break;
	case  2:
		{
			cout << "choice == 2" << endl;
		}
		break;
	default: 
		{
			cout << "wrong input" << endl;
		}	
	return 0;
}
}