#include<iostream>
#include<string>
using namespace std;

int main(){
	int n=0;
	for (int i=0; i<=10;i++)
		{
			cout << i << endl;;
		}
	for(int i=10; i>1;i--)
		{
			cout << " second loop" << endl;
			cout << i << endl;;
		}
	n=5; 
	while(n>0)
		{
			cout << "while" << endl;
			n--;
		}
	return 0;
}