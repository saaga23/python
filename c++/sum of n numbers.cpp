// seconf code to return sum of n integers
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int sum_n(int n){
	int temp;
	for (int p=0; p<=n; ++p)
		{
			temp = temp + p;
		}
		return temp;
}
int main(){
	int num1;
	cout << "enter a value to get its sum\n" << endl;
	cin >> num1;
	cout <<"sum of n numbers is: " <<sum_n(num1) << endl;
	return 0;
}