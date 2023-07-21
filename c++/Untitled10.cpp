#include <iostream>
#include <string>
#include <fstream>
using namespace std;
int main(){
	ofstream Afile("afile.txt");
	Afile << "rubbish";
	Afile.close();
	
	fstream random;
	random.open("afile.txt",ios::in);
	string ch;
	random >> ch;
	cout << ch;
	random.close();
	
	fstream file3;
	file3.open("file34.txt",ios::out);
	file3 << "content";
	string temp;
	file3 >> temp;
	cout << temp;
	file3.close();
	
	fstream crazy;
	crazy.open("file34.txt",ios::in);
	string temp1;
	crazy >> temp1;
	cout << temp1;
	return 0;
}