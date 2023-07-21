#include <iostream>
#include <string>
using namespace std;
class Mystring{
private:
	char* buffer;
	
public:
	Mystring(const char* initstring) // constructor
	{
		if(initstring != NULL)
		{
			buffer = new char [strlen(initstring) + 1];
			strcpy(buffer, initstring);
		}
		else 
			buffer = NULL;
	}
	
	~Mystring()
	{
		cout << "Invoking destructor , clearing up" << endl;
		if (buffer != NULL)
			delete [] buffer;
	}
	
	int GetLength()
	{
		return strlen(buffer);
	}
	
	const char* GetString()
	{
		return buffer;
	}
};

int main()
{
	Mystring sayHello("Hello fromString Class");
	cout << "String buffer in sayHello is " << sayHello.GetLength() << endl;
	cout << "characters long" << endl;
	
	cout << "Buffer contains: " << sayHello.GetString() << endl;
}