#include <iostream>
using namespace std;

class Human
{
	private:
		// private member data:
		int age;
		
	public:
		void setAge(int inputAge)
		{
			age = inputAge;
		}
		
		// human lies about his / her age (if over 30)
		int GetAge()
		{
			 if (age> 30)
			 	return (age - 2);
			else
				return age;
		}
};

int main()
{
	Human firstMan;
	firstMan.setAge(35);
	
	Human firstWoman;
	firstWoman.setAge(22);
	
	cout << "Age of firstMan " <<firstMan.GetAge() << endl;
	cout << "Age of firstWoman " <<firstWoman.GetAge() << endl;
	
	return 0;
}
