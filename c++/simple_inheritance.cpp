#include <iostream>
using namespace std;

class Fish
{
public:
	bool isFreshWaterFish;
	
	void Swim()
	{
		if (isFreshWaterFish)
		{
			cout << "Swims in lake" << endl;
		}
		else
		{
			cout << "Swims in sea" << endl;
		 } 
		
	}
};

class Tuna: public Fish
{
public:
	Tuna()
	{
		isFreshWaterFish = false;
	}
};
class carp: public Fish
{
public:
	carp()
	{
	isFreshWaterFish = true;
}
};

int main()
{
	carp myLunch;
	Tuna myDinner;
	
	cout << "About my food:" << endl;
	
	cout  << "Lunch: ";
	myLunch.Swim();
	
	cout << "dinner: ";
	myDinner.Swim();
	
	return 0;
}