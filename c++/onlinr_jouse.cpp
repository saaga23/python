#include<iostream>
#include<string>
using namespace std;

class house
{private:
	// memeber variable
	int length, breadth;
 public:
	//member functions
	void SetData(int x, int y)
	{length = x; breadth = y;
	}
	
	void area()
	{cout << length * breadth;}
};

int main()
{
	house h1; //memory allocated
	
	h1.SetData(500,600);
	h1.area();
	
	return 0;
}