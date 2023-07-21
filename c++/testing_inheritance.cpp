#include <iostream>
#include <string>
using namespace std;

class grandparent {
public:
	void method1()
	{
		cout << "from grandparent class" << endl;
	}
};
class parent {
public:
	void method2()
	{
		cout << "from parent class" << endl;
	}
};
class child: public grandparent, public parent{
};

int main()
{
	child little;
	little.method1();
	little.method2();
	
	return 0;
}