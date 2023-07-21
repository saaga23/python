// sunday aspita abraham
#include <iostream>
#include <string>
using namespace std;

class Room1{
	public:
		int n;
		float radius;
		float pi = 3.142;
	
	area(){
		float area;
		area = radius * radius * pi;
		return area;
	}
	
	average(){
		float avg;
		int i;
		float sum;
		float Temp;
		for(i=0; i<n; i++)
			{
				cout << "Enter user input " << endl;
				cin >> Temp;
				sum = sum + Temp;
			}
			avg = sum / n;
			return avg;
	}
};

int main() {
	Room1 RoomB;
	cout << "Enter amount of numbers u intend to find the average of" << endl;
	cin >> RoomB.n;
	cout << "Enter radius" << endl;
	cin >>RoomB.radius;
	cout <<"average is" << RoomB.average()<< endl;
	cout <<"area is"<< RoomB.area() << endl;
	
}