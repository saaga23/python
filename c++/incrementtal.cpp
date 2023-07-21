#include <iostream>
using namespace std;
int main()
{
	int num1 = 101;
	int num2 = num1++; // postfix increment operator
	int num3 = ++num1; // prefix increment operator
	int num4 = num1--; // pos tfix decrement operator
	int num5 = --num1; // prefix decrement operator
	cout<<num1<<" num1++;"<<num2<<"\n++num1;"<<num3<<"\nnum1--;"<<num4<<"\n--num1;"<<num5<<endl;
}