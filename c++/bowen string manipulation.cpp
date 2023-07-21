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
	cout << "occurance of bowen";
	for (i = str.length(); i>=0; --i)
	{
		if(str[i] == 'b' && str[i+1] =='o' && str[i+2] =='w' && str[i+3] == 'e' && str[i+4]=='n')
		{
		
		
			count = count + 1;
		}
	}
	return count;
}

string inserter(string str, string str2){
	int count; 
	int i;
	cout << "occurance of bowen";
	for (i = str.length(); i>=0; --i)
	{
		if(str[i] == 'u' && str[i+1] =='n' && str[i+2] =='i' && str[i+3] == 'v' && str[i+4]=='e')
		{
		
		
			str.insert(str[i],str2);
		}
	}
	return str;
}

string replacer(string str, string str3){
	int count; 
	int i;
	cout << "occurance of bowen";
	for (i = str.length(); i>=0; --i)
	{
		if(str[i] == 'u' && str[i+1] =='n' && str[i+2] =='i' && str[i+3] == 'v' && str[i+4]=='e')
		{
		
		
			str.replace(str[i],10,str3);
		}
	}
	return str;
}
	
int main(){

	
	string str="what a great day bowen ids bowen university for real university";
	string str2="iwo road";
	string str3="college";
	cout << reverser(str) << endl;
	
	
	cout << "number of vowels=" << countVowels(str) << endl;
	cout << "bowen count = " << bowen_count(str) << endl;
	cout << "insertion\n" << inserter(str,str2) << endl;
	cout << "replace university" << replacer(str,str3) << endl;
	
	return 0;
}