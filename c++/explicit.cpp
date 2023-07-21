#include<iostream>
using namespace std;

class Human
{
	int age;
public:
	// ecplicit constructor blocks implicit conversions
	explicit Human(int humansAge) : age(humansAge) {
	}
};

void DoSomething(Human person)
{
	cout << "Human sent did something" << endl;
	return;
}
int main()
{
	Human Kid(10); //explicit conversion is OK
	Human anotherKid = Human(11); // explicit, ok
	DoSomething(Kid); // ok
	
	// Human anotherKid2 = 11; // failure; implicit conversion not ok
	// DoSomething; // implicit conversion
	
	return 0;
}