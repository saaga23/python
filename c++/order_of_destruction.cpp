#include <iostream>
using namespace std;

class FishDummyMember
{
public:
	FishDummyMember()
	{
		cout << "FishDummyMember constructor " << endl;
	}
};

class Fish
{
protected:
	FishDummyMember dummy;
	
public:
	// Fish constructor
	Fish()
	{
		cout << "Fish constructor " << endl;
		
	
	}
	
	~TunaDummyMember()
	{
		cout << "TunaDummyMember destructor" << endl;
	}
};

class Tuna: public Fish
{
private:
	TunaDummyMember dummy;

public:
	Tuna()
	{
		cout << "Tuna constructor" << endl;
		
	}
	~Tuna()
	{
		cout << "Tuna destructor" << endl;
	}
};

int main()
{
	Tuna myDinner;
}