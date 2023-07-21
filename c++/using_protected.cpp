#include <iostream>
using namespace std;

class Fish
{
protected:
	bool isFreshWaterFish; // accessable only to derived classes
	
public:
	void swim()
	{
		if (isFreshWaterFish)
			{
				cout << "Swim in lake" << endl;
			}
		else
			{
				cout <<"Swims in sea" << endl;
			}
	}
};

class Tuna:public Fish
{
public:
	Tuna()
	{
		isFreshWaterFish = false; // set protected member in base
	}
};

class carp: public Fish
{
public:
	carp()
	{
		isFreshWaterFish = false;
	}
};

int main()
{
	carp myLunch;
	Tuna myDinner;
	
	cout << "About my food" << endl;
	
	cout << "Lunch: " << endl;
	myLunch.swim();
	
	// uncomment line below to see the protected members
	// are not accessible from outside the class hierachy
	// myLunch.isFreshWaterFish = false;'
	
	return 0;
}