#include <iostream>
int main()
{
	int sum = 0, value = 0;
	// readuntil end of file calculatinf a running total of all valuees read
	while (std::cin >> value)
		sum += value; // equivalent to sum = sum + value
	std::cout << "sum is: " << sum << std::endl;
	return 0; 
}