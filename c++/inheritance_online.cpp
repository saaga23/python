// Base class
#include<iostream>
#include<string>
using namespace std;


class Vehicle {
	public:
		string brand ="Ford";
		void honk(){
			cout << "Tuut, tuut! \n" ;
			
		}
};

// Derived class
class car: public Vehicle {
	public:
		string model = "Mustang";
		
};
int main()
{
	car mycar;
	mycar.honk();
	cout <<mycar.brand + " " + mycar.model;
	return 0;
}