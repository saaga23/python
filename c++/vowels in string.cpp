#include <iostream>
#include <string>
using namespace std;

int main ()
{
	string text;
	char a='a',e='e',i='i',o='o',u='u';
	int count;
	getline(cin,text);
	
	for (string::size_type i = 0; i < text.length(); i++)
		{   
			if (text[i] == a || e || i || o || u )
				{
					count = count + 1;
				}
		}
	cout << count << endl;
	return 0;
}