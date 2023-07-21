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
       

       int main(){
	
	char Bowen_anthem1[]  = "great alma mater bowen university excellence and godliness is our esteemed watch word though tongues may differ in brotherhood we stand in christ hail alma mater dear";
	char Bowen_anthem2[]  = "great alma mater bowen university on christ the foundation built that can not be shaken others may falter our conviction we hold so firm hail alma mater dear";
	
	string word = "bowen";
    cout <<"\ncount occurance : "<< countOccurance(Bowen_anthem2,word) << endl;
    cout <<"\ncount occurance : "<< countOccurance(Bowen_anthem1,word) << endl;
}