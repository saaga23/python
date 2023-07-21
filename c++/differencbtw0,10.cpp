#include <iostream>
int main()
{
	int difference = 0,val=10;
	while (val>=0){
		difference += val;
		--val;
	}
	std::cout<<"difference btween numbers in range of 0 to 10: "
			 <<difference<<std::endl;
	return 0;
}