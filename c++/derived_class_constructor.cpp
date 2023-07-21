#include <iostream>
using namespace std;

class Fish
{
protected:
	bool isFreshWaterFish; // accessible only to derived classes
	
public:
	// Fish constructor
	Fish(bool isFreshWater) : isFreshWaterFish(isFreshWater){
		
	}
	void swim()
	{
		if (isFreshWaterFish)
			cout << "Swims in lake" << endl;
		else
			cout << "Swims in sea" << endl;
			
	}
};

class Tuna: public Fish
{
public:
	Tuna(): Fish(true) {
	} // constructor initialize base
};
class carp: public Fish
{
public:
	carp(): Fish(true) {
	}};
	
int main()
{
	carp myLunch;
	Tuna myDinner;
	
	cout << "About my food" << endl;
	
	cout << "Lunch: " ;
	myLunch.swim();
	
	return 0;
}
