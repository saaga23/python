// c program to illustrate 
// ispace() function
#include <ctype.h>
#include <stdio.h>
#include <iostream>
#include <string>
int main(){
	// taking input
	
	std::string ch = "";
	
	// checking is it space?
	if (isspace(ch))
	{
		cout << "\n Entered character is space";
		
	}
	else
	{
		cout << "\nEntered character is not space"
	}
}