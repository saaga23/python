#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main () {
	
	
	// Create a text file
	ofstream
	Anthem1("filename.txt");

	// Write to the file 
	Anthem1 << "Nigeria Arise, O Compatriots,Nigeria's call obey To serve our Fatherland With love and strength and faith.The labour of our heroes past Shall never be in vain,To serve with heart and might One nation bound in freedom, peace and unity.";
	
	// Close the file
	Anthem1.close();
	
	// Create a text string, which is used to output the text file
	string myText;
	
	// Read from the text file
	ifstream
	MyReadFile("filename.txt");
	
	// Use a while loop together with getline() function to read the file line by line
	
	while (getline (MyReadFile,myText)) {
		// Output the text from the file
		cout << myText;
	// c++ program to count the white space
	
	int count = 0;
	std::string line;
	
	while (getline(MyReadFile, line))
	{
		for (int i = 0; i < line.length(); i++)
		{
			if(line[i] == ' ' || line[i] == '\t')
			{
				count++;
			}
		}
	}
	std::cout << "Number of whitespace for anthem is " << count << "\n.";
	return 0; 
	}
}