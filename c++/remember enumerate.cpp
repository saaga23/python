#include <iostream>
#include<string>
using namespace std;
int main(){
	enum color{
		black = 5,
		green,
		yellow,
		blue
	};
	cout << "yellow value is " << yellow + blue << endl;
	return 0;
}