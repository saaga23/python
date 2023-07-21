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
	int imt1=0;
	int imt2=0;
	int imt3=0;
	int imt4=0;
	int imt5=0;
	
	int mynums[array_len]={};
	int mynums1[array2_len]={int1,int2,int3,int4,int5};

	
	for(int index=0; index < array_len;++index)
		{
			cout << "Please enter an integer: " << endl;
			cin >> mynums[index];
		}
	


	int1 = mynums[4],
	int2 = mynums[3],
	int3 = mynums[2],
	int4 = mynums[1],
	int5 = mynums[0],
	
	imt1=int1 + mynums[0],
	imt2=int2 + mynums[1],
	imt3=int3 + mynums[2],
	imt4=int4 + mynums[3],
	imt5=int5 + mynums[4],
	
	
	
	cout << "sum of the array and its reverse:  " << imt5 <<" "<< imt4 <<" "<< imt3 <<" "<< imt2 <<" " << imt1 << endl;
	return 0;
}