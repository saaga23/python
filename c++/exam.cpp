#include<iostream>
#include<string>
#include<fstream>
using namespace std;


int main(){
	ofstream file;
	file.open("file1.txt");
	file << "happy";
	file.close();
	
	
	ifstream file1;
	file1.open("file1.txt");
	file1 << "fuck";
	string temp;
	temp << file1;
	cout << temp << endl; 
}