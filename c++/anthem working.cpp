#include <iostream>
#include <cstring>
#include<string>
#include<bits/stdc++.h>
using namespace std;
int countOccurance(char *str,string word){
            char *p;

            // split the sting by space in a
            vector<string> a;

            p = strtok(str, " ");
            while (p != NULL)
            {
                a.push_back(p);
                p = strtok(NULL, " ");
            }

            // search for pattern in a
            int c = 0;
            for (int i = 0; i < a.size(); i++)
            // if match found increase count
                if (word == a[i])
                    c++;
            return c;
    }
       
/* C++ program to count no of words
from given input string. */
#define OUT 0
#define IN 1

// returns number of words in str
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

string ReplaceAllSubstringOccurrences(string sAll, string sStringToRemove, string sStringToInsert)
{
   int iLength = sStringToRemove.length();
   size_t index = 0;
   while (true)
   {
      /* Locate the substring to replace. */
      index = sAll.find(sStringToRemove, index);
      if (index == std::string::npos)
         break;

      /* Make the replacement. */
      sAll.replace(index, iLength, sStringToInsert);

      /* Advance index forward so the next iteration doesn't pick it up as well. */
      index += iLength;
   }
   return sAll;
}


// Function to check the Vowel
bool isVowel(char ch)
{
    ch = toupper(ch);
    return (ch=='A' || ch=='E' || ch=='I' ||
                       ch=='O' || ch=='U');
}
 
// Returns count of vowels in str
int countVowels(string str)
{
    int count = 0;
    for (int i=0; i<str.length(); i++)
        if (isVowel(str[i])) // Check for vowel
            ++count;
    return count;
}

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
    
    cout << "No of words : " << countWords(Bowen_anthem1);
   
    
    string word = "bowen";
    cout <<"\ncount occurance : "<< countOccurance(Bowen_anthem2,word) << endl;
    
    string sFinalString = ReplaceAllSubstringOccurrences(Bowen_anthem2, "university","college");
    cout <<"\n replace university to college :  " <<"\n" << sFinalString << endl;
    
    string insert = ReplaceAllSubstringOccurrences(Bowen_anthem2, "university","university iwo osun state nigeria");
    cout <<"\n insert iwo,osun state nigeria to every university :  " <<"\n" << insert<< endl;
    
    
    //number of vowels in anthem 1
  	cout <<"number of vowels : " << countVowels(Bowen_anthem2)  << endl; 
  	
    
    cout <<"reverse of anthem 2 : " << reverse(Bowen_anthem2) << endl;
    cout <<"reverse of anthem 1 : " << reverse(Bowen_anthem1) << endl;
    return 0;
}

