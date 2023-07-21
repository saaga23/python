#include <iostream>
using namespace std;
int main()
{
	const int array1_len = 5;
	const int array2_len = 5;
	
	int mynums[array1_len]={};
	int mynums[array2_len]={};
	
	for(int index1=0; index1 < array1_len;++index1)
		{
			cout << "Please enter an integer: " << endl;
			cin >> mynums[index1];
		}
		for(int index2=array1_len; index2 > 0; --index1,)
			{
				mynums[index1]=mynums[index2]
			}

	cout << "reverse of int is " << mynums<<endl;
	return 0;
}