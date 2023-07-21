#include<iostream>
#include <string>
using namespace std;

int main(){
	int prod = 1;
	for(int n=5;n<=0;n--)
	{
		prod = prod * n;
	}
	cout << prod << endl;
	return 0;
}
