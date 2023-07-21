#include <iostream>
int main()
{
	
	std::cout <<"Enter two integers "<<std::endl;
	int val1=0,val2=0;
	std::cin >> val1 >> val2;
	int total1=0;
	while (val1 > 0 ){
		total1 += val1;
		--val1;
	}std::cout <<"range of integer 1 is " << total1 << std::endl;
	int total2=0;
	while (val2 > 0 ){
		total2 += val2;
		--val2;
	}
	std::cout <<"range of integer 2 is " << total2 << std::endl;
	return 0;	
}