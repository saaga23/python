#include <iostream>
#include <string>
using namespace std;

class Human
{
private:
	friend void Display(const Human& person);
	string name;
	int age;
	
public: 
	Human(string humansName, int humansAge)
	{
		name = humansName;
		age = humansAge;
		
	}
};

void DisplayAge(const Human& person)
{
	cout << person.age << endl;
}
int main()
{
	Human firstMan("Adan", 25);
	cout << "Accessing private member age via friend function: ";
	DisplayAge(firstMan);
	
	return 0;
}