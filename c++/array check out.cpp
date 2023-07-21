// a program to create an array cout cont
#include<iostream>
#include<string>
using namespace std;

int main(){
	int n = 5;
	int arr[n] = {1,2,3,4,54};
	int holder;
	for(int i = 0; i < 5; ++i)
		{
			holder = holder + arr[i];
			
		}
	cout << holder << endl;
	return 0;
}
