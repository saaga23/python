#include <iostream>
#include <string>
using namespace std;

int main(){
	string text;
	getline(cin,text);
	for (string::size_type i = 0; i < text.length(); i++)
		{
   			 if (text[i] == ' ')
   				 {
   				     text[i] = '+';
   				 }
		}
	cout << text << endl;
	
	string holder;
	getline(cin,holder);
	int count;
	for (string::size_type m = 0; m < holder.length(); m++)
		{
			if(holder[m] == 'a')
				{
					count = count + 1;
				}
		}
	cout << count << endl;
	return 0;
}