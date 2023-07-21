// a program to find the sun of first multiple of 3
#include <iostream>
#include<string>
#include<cmath>
using namespace std;

int sum_three(int n){
	int temp;
	int storage;
	for (int p = 1; p<=n; ++p)
		{
			if (p % 3 == 0)
			{
				storage = storage + 1;
			
			}
		}
		for (int k=0; k<=storage; ++k)
		{
			temp = temp + k;
		}
	return temp;
	
}

int main(){
	int n;
	cout << "enter integer value to check multiple of n\n";
	cin >> n;
	cout << "multiple of n are :" << sum_three(n) << endl;
}