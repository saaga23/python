#include <iostream>
#include <string>
using namespace std;

string reversee(string word){
	string holder;
	int i;
	i = word.length();
	for(i;i=0;--i)
		{
			holder = holder + word[i];
	}
	return holder;
} 

int main(){
	string word;
	cout << " enter word";
	getline(cin,word);
	cout << reversee(word) << endl;
	
}