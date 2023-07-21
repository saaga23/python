// assignment in doctor olatunji part
#include <iostream>
#include<string>
#include<cmath>
using namespace std;


int main(){
	float lenght;
	float breadth;
	cout << "enter length of rectangle\n";
	cin >> lenght;
	cout << "enter breadth of rectangle\n";
	cin >> breadth;
	float perimeter;
	float diagonal;
	float area;
	perimeter = 2*(lenght + breadth);
	area = lenght * breadth;
	diagonal=(pow(lenght,2) + pow(breadth,2));
	diagonal=sqrt(diagonal);
	
	cout << "perimeter is: " << perimeter <<endl;
	cout << "area is : " << area << endl;
	cout << "diagonal is :  "<< diagonal << endl;
	return 0;
}