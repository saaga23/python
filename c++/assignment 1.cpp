#include<iostream>
#include<string>
#include<fstream>
using namespace std;

int main(){
	ofstream fresh("fresh.txt");
	fresh << "\nline 1 read";
	fresh << "\nline 2 read";
	fresh << "\nline 3 read";
	fresh.close();
	
	char name[20],ch;
	fstream fp;
	cout << "enter filename";
	gets(name);
	
	fresh.open(name, fstream::in);
	if(!fresh)
	{
	
		cout << "not file";
		
	 } 
	
	cout << "FILE CONTENT is" << name <<":-\n";
	while(fp >> noskipws >> ch )
		cout << ch;
		
	fresh.close();
	cout << endl;	
	return 0;
}