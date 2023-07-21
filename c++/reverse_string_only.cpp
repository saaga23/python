#include <iostream>
#include <cstring>
#include<string>
#include<bits/stdc++.h>
using namespace std;

//function for reverse
string reverse(string str)
{
	int i;
	string hold1="";
    cout<<"Printing string in reverse\n";
    for(i = str.length() - 1; i >= 0; i--)
    {
        hold1= hold1 + str[i];
    }
    return hold1;
}

// Driver code
int main(){
	
	char Bowen_anthem1[]  = "great alma mater bowen university excellence and godliness is our esteemed watch word though tongues may differ in brotherhood we stand in christ hail alma mater dear";
	char Bowen_anthem2[]  = "great alma mater bowen university on christ the foundation built that can not be shaken others may falter our conviction we hold so firm hail alma mater dear";
	
	cout << "\n" << reverse(Bowen_anthem1);
	cout << "\n" << reverse(Bowen_anthem2);
}