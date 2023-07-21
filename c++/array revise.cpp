#include <iostream>
using namespace std;

int main(){
	// array declaration by specifying size
	string arr1[10];
	
	// With recent C/C++ versions, we can also 
	// declare an array of user specified size
	int n = 10;
	int arr2[n];
	
	arr1[0] = 5;
	arr1[2] = -10;
	
	arr1[3/2] = 2;
	arr1[3] = arr1[0];
	
	cout << arr1[0] << " " <<arr1[1] << " " << arr1[2] << " " << arr1[3] << endl;
	
	string arr[] = {"12", "45", "5"};
	return 0;
	
}