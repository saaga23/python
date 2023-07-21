#include<iostream>
#include<string>
#include<cmath>
using namespace std;

int main(){
	double length,breadth,area,perimeter,dlength,temp;
	cout << "enter value for lenght ";
	cin >> length;
	cout << "enter value for breadth";
	cin >> breadth;
	area = length * breadth;
	perimeter = 2 * length * breadth;
	temp = (pow(length,2)) + (pow(breadth,2));
	dlength =sqrt(temp);
	cout << "input values " << length<< breadth;
	cout << "area =" << area << "perimeter =" << perimeter << "Diagonal lenth = " << dlength;
	return 0;
}