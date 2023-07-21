//NAME: SUNDAY ASPITA ABRAHAM
//MATRIC NUMBER: BU21CSC2006
//DEPARTMENT : COMPUTER SCIENCE




// program to illustrate the working of objects and class in c++ programming by 
//finding the area of a circle and average of three integers

#include <iostream>
using namespace std;

// create a class
class Room{
	public:	
		float radius;
		float pi;
		float num1;
		float num2;
		float num3;
		
		
	float calculateArea() {
		float area = radius * radius * pi;
		return area;
		
	}
	float average(){
		float sum = num1 + num2 + num3;
		return sum / 3;
	}
};
int main() {
	// create object of Room class
	Room Room1;
	
	// assign values to data members
	cout << "enter value for num1:" << endl;
	cin >> Room1.num1;
	cout << "enter value for num2:" << endl;
	cin >> Room1.num2;
	cout << "enter value for num3:" << endl;
	cin >> Room1.num3;
	cout << "enter value for radius:" << endl;
	cin >> Room1.radius;
	cout << "enter value for pi" << endl;
	cin >> Room1.pi;
	// calculate and display area and average
	cout << "Area  = " << Room1.calculateArea() << endl;
	cout << "average =" << Room1.average() <<endl;
	
	return 0;
}