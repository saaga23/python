//DANIELLE
//BU20CIT1036
//Computer Science
#include <iostream>
#include <string>
using namespace std;

class Room{
	public:
		float radius;
		float pi;
		int n;
		
	float calculate_area(){
		float area = radius * radius * pi;
		return area;
	}
	float Average(){
		float sum;
		float temp;
		int i;
		float average;
		for(i=0; i<n; ++i)
		{	cout << "Enter a value " << endl;
			cin >> temp;
			sum = sum + temp; 
		}
		average = sum / n;
		return average;
	}
};

int main()
{	Room Room1;

	char choice_average = '\0';
	cout << "Do you want to calculate the average ? (y/n)" <<endl;
	cin >> choice_average;
	if (choice_average == 'y'){
		cout << "how many numbers are you finding average for? " <<endl;
		cin >> Room1.n;
		float final_average;
		final_average = Room1.Average();
		cout << "Average = " << final_average << endl;
	}
	
	char choice_area = '\0';
	cout << "Do you want to calculate area of a circle? (y/n)" << endl;
	cin >> choice_area;
	if (choice_area == 'y'){
		cout << "enter value for radius " << endl;
		cin >> Room1.radius;
		cout << "enter value for pi "<< endl;
		cin >> Room1.pi;
		cout << "area = " << Room1.calculate_area() << endl;
	}
	return 0;
}
