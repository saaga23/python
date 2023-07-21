#include<iostream>
#include<string>
using namespace std;

int main(){
	string txt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	cout << "string lenght is" << txt.length();
	char k[] = "Hello world";
	int len;
	len = strlen(k);
	cout << "len of string k = " << len << endl;
	
	cout << txt;
	return 0; 
}