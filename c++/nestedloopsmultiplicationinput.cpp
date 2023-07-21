#include <iostream>
using namespace std;

int main()
{
	const int ARRAY1_LEN = 3;
	const int ARRAY2_LEN = 2;
	
	
	int myNums1[ARRAY1_LEN] = {};
	for (int counter = 0; counter < ARRAY1_LEN; ++counter)
	{
		cout<<"Enter values for array1" << endl;
		cin>>myNums1[ARRAY1_LEN];
	}
	
	int myNums2[ARRAY2_LEN] = {};
	for (int counter = 0; counter < ARRAY2_LEN; ++counter)
	{
		cout<<"Enter values for array2" << endl;
		cin>>myNums1[ARRAY2_LEN];
	}
	cout << "Multiplying each int in myNums1 by each in myNums2:" << endl;
	cout << myNums1[ARRAY1_LEN] << endl;
	for(int index1 = 0; index1 < ARRAY1_LEN; ++index1)
		for(int index2 = 0; index2 < ARRAY2_LEN; ++index2)
			cout << myNums1[index1] << " x " << myNums2[index2] \
			<< " = " << myNums1[index1] * myNums2[index2] << endl;
			
	return 0;
}