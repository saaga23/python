#include <iostream>
#include <cstring>
#include<string>
#include<bits/stdc++.h>
using namespace std;

unsigned countWords(char *str)
{
	int state = OUT;
	unsigned wc = 0; // word count

	// Scan all characters one by one
	while (*str)
	{
		// If next character is a separator, set the
		// state as OUT
		if (*str == ' ' || *str == '\n' || *str == '\t')
			state = OUT;

		// If next character is not a word separator and
		// state is OUT, then set the state as IN and
		// increment word count
		else if (state == OUT)
		{
			state = IN;
			++wc;
		}

		// Move to next character
		++str;
	}

	return wc;
}

int main{
	char Bowen_anthem1[]  = "great alma mater bowen university excellence and godliness is our esteemed watch word though tongues may differ in brotherhood we stand in christ hail alma mater dear";
	char Bowen_anthem2[]  = "great alma mater bowen university on christ the foundation built that can not be shaken others may falter our conviction we hold so firm hail alma mater dear";
    
    cout << "No of words : " << countWords(Bowen_anthem1);
    cout << "No of words : " << countWords(Bowen_anthem2);
    
   
}