#include <iostream>
#include <string>
using namespace std;

int main(){
	// repititive statement 
	// types of repititive statement in c++
	// while loop,for loop,do while loop
	
	for (int i=0; i<5; ++i)
		{
		cout << "hello world\n\t";	
		}
	
	int n = 0;
	while ( n < 5)
		{
			cout << "hello world\n\t";
			n = n+1 ;
		}
	int p =0;
	do 
	{
		cout << "hello world\n\t";
		p = p+1;
	}
	while (p<5);
	return 0;	
}