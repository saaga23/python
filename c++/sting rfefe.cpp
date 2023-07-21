#include<iostream>
#include<string>
#include<windows.h>
using namespace std;


string reverser(string str){
	int i;
	string hold1="";
	cout << "revese of a string";
	for(i = str.length() -1; i>=0; i--)
	{
		hold1= hold1 + str[i];
	}
	return hold1;
}

int  countVowels(string str){
	int count;
	int i;
	string hold2="";
	cout << "number of vowels";
	for (i = str.length(); i>=0; --i)
	{
		if(str[i] == 'a' || 'e' ||'i' || 'o' || 'u')
		{
			count = count + 1;
		}
	}
	return count;
}
	
int  bowen_count(string str){
	int count;
	int i;
	string hold2="";
	cout << "number of vowels";
	for (i = str.length(); i>=0; --i)
	{
		if(str[i] == 'b' && str[i+1] ='o' && str[i+2]=='w' && str[i+3]=='e' && str[i+4]=='n')
		{
			count = count + 1;
		}
	}
	return count;
}
	
int main(){

	
	string str="what a great day";
	cout << reverser(str) << endl;
	return 0;
	
	cout << "number of vowels=" << countVowels(str) << endl;
}