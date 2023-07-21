#include <iostream>
int main()
{
	int difference = 0;
	for(int val=10; val>=0; --val)
	difference += val;
	std::cout << "sum of number from 10 to 0"
			  <<difference<<std::endl;
	return 0;
}