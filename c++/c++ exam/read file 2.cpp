#include<iostream>
#include<fstream>
#include<stdio.h>

using namespace std;
int main()
{
	ofstream fresh("fresh.txt");
	
	fresh << "\nline 1 read through";
	fresh << "\nline 2 read through";
	fresh << "\nline 3 read through";
	
	fresh.close();

	char filename[30], ch;
	fstream fp;
	cout << " Enter the name of File: ";
	gets(filename);
	fp.open(filename, fstream::in);
	if(!fp)
	{
		cout << "wrong name";
		return 0;
	}
	cout << "\ncontent of " <<filename<<":-" << endl;
	while(fp >> n+oskipws >> ch)
		cout << ch;
	fp.close();
	cout << endl;
	return 0;
}