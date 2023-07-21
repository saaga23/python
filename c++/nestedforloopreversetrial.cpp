#include <iostream>
using namespace std;
int main()
{
	const int array_len = 5;
	const int array2_len = 5;
	
	int int1=0;
	int int2=0;
	int int3=0;
	int int4=0;
	int int5=0;
	int index1=0;
	
	int mynums[array_len]={};
	int mynums1[array2_len]={};

	
	for(int index1=0; index1 < array_len;++index1)
		{
			cout << "Please enter an integer: " << endl;
			cin >> mynums[index1];
		}
		for(int index2=5; (index2  > 0 and index1 < 0); --index2)
			
			{
				mynums1[index2] = mynums[index1] ;
				index1 = index1 + 1;
			}
			
	cout<<"my array reverse : " << mynums1[3] << endl;
	return 0;
}