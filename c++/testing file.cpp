#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ofstream file("FileTest.txt");
	file << "enter\n anything\n random";
	file.close();
	fstream file1;
	file1.open("FileTest.txt",ios::in);//Reads the file
	if(!file1)
	{
		cout << "No such file";
	}
	else{
		char ch;
		while(!file1.eof()){
			file1 >> ch;
			cout << ch;
		}
	file1.close();
	return 0;
	}
}