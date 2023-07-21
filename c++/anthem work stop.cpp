#include<iostream>
#include<string>
using namespace std;

int countoccurance(char str,string word){
	string find;
	int count;
	getline(cin,find);
	for(int i,word.length(),i++;)
		{
			if (find==word[i])
				{
					count = count + 1;	
				}
		}
		return count;
}