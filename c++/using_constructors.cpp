#include <iostream>
#include <string>
using namespace std;

class Human
{
	private:
		string name;
		int age;
		
		
	public:
		Human() //Constructor
		{
			age = 1; // initialization
			cout << "constructed an instance of class Human" << endl;
		}
		
		void setName (string humansName)
		{
			name = humansName;
		}
		
		void setAge(int humansAge)
		{
			age = humansAge;
		}
		
		void IntroduceSelf()
		{
			cout << "I am " + name << " and am ";
			cout << age << " Years old" << endl;
		}
};

int main()
{
	Human firstWoman;
	firstWoman.setName("Eve");
	firstWoman.setAge(28);
	
	firstWoman.IntroduceSelf();
}