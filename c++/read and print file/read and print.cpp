//HeatWaves
#include<iostream>
#include<fstream>
#include<stdio.h>
using namespace std;
int main()
{
	// Create and open a text file
	ofstream file4("file4.txt");
	
	//cWrite to the file
	file4 << "\nline 1 read through";
	file4 << "\n line 2 read through";
	file4 << "\n line 3 read through";
	
	// Close the file
	file4.close();
	
	
    char fileName[30], ch;
    fstream fp;
    cout<<"Enter the Name of File: ";
    gets(fileName);
    fp.open(fileName, fstream::in);
    if(!fp)
    {
        cout<<"\nError Occurred!";
        return 0;
    }
    cout<<"\nContent of "<<fileName<<":-\n";
    while(fp>>noskipws>>ch)
        cout<<ch;
    fp.close();
    cout<<endl;
    return 0;
}
