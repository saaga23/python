#include<iostream>
#include<string>
using namespace std;
int main(){
	int sum;
	int count;
	for (int i;i=10;i++)
		{
			sum = sum + i;
			cout << sum << endl;
		}
	while (count < 10)
		{
			
		
			sum = sum + count;
			count = count + 1;
			cout <<  sum <<endl;
		}

	return 0;
}