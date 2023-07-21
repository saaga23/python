#include <iostream>
using namespace std;

int main()
{
	int age = 30;
	int* points_to_int = &age; //pointer initialised to &age
	
	// Displaying the value of pointer
	cout << " Integer age is at: " << hex <<points_to_int << endl;
	
	return 0;
}