#include <iostream>
#include <string>
using namespace std;

class calculate{
	public:
		float radius;float pi;float n; 
	float method1(){
		
		float area = radius * radius * pi;
		cout << "area = " << area;	
		return area;
		
	}
	
	
	float method2(){
		float sum;float temp;float average;
		for (int i=0; i=n; ++i){
			cout << " enter a values " << endl;
			cin >> temp;
			sum = sum + temp;
		 average = sum/n;
		return average;
		}
	}
	
int main(){
	calculate calc;
	cout << "enter a value for radius " << endl;
	cin >> calc.radius;
	cout << "enter a value for pi " << endl;
	cin >> calc.pi;
	cout << calc.method1() << endl;
	cout << "enter how many numbers you want to calc average" << endl;
	cin >> calc.n;
	cout << calc.method2() << endl;
	
	return 0;
}
};