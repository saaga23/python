#include <iostream>
#include <string>
using namespace std;

int main()
{
	cout << "How many integers shall i reserve memory for?" << endl;
	int num_entries = 0;
	cin >> num_entries;
	
	int* mynumbers = new int [num_entries];
	
	cout << "Memory allocated at: " << mynumbers << hex << endl;
	delete[] mynumbers;
	
	return 0;
}