#include <iostream>
#include <string>
using namespace std;

class Human
{
	private:
		string name;
		int age;
		
	public:
		Human() // default constructor
		{
			age = 0; // initialized toensure no junk value
			cout << "Default constructor: name and age set" << endl;	  
		}
		
		Human(string humansName, int humansAge) // overloaded
		{
			name = humansName;
			age = humansAge;
			cout << "overloaded constructor creates ";
			cout << name << " of " << age << " Years" << endl;
		}
};

int main()
{
	Human firstMan; // use default constructor
	Human firstWoman ("Eve", 20); // use overloaded constructor
}