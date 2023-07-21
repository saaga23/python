#include <iostream>
using namespace std;

int main()
{
	unsigned short ushortValue =65535;
	cout << " Incrementing unsigned short " << ushortValue << " gives: ";
	cout << ++ushortValue << endl;
	
	short signedshort = 32767;
	cout << "Incrementing signed short " << signedshort << " gives: ";
	cout << ++signedshort << endl;
	
	return 0;
}