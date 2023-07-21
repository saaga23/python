#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
	string str = "geeks for geeks";
	
	// Reverse str[begin..end]
	reverse(str.begin(), str.end());
	
	cout << str;
	return 0;
}