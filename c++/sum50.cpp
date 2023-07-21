#include <iostream>
int main()
{
	int	sum=0, val = 50;
	//keeping value of val as 50 so it starts at 50
	while (val <= 100){
		sum += val;
		++val;
	}
	std::cout<<"sum ofnumbers betweeen 50 to 100 inclusive is "
	         <<sum << std::endl;
	return 0;
}