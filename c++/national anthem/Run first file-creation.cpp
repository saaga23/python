#include <iostream>
#include <fstream>
using namespace std;

int main() {
	// Create and open a text file
	ofstream file1("anthem1.txt");
	
	//cWrite to the file
	file1 << "Nigeria Arise, O Compatriots,Nigeria's call obey To serve our Fatherland With love and strength and faith.The labour of our heroes past Shall never be in vain,To serve with heart and might One nation bound in freedom, peace and unity.";
	
	// Close the file
	file1.close();
	
	// Create and open a text file
	ofstream file2("anthem2.txt");
	
	//cWrite to the file
	file2 << "Oh God of creation, direct our noble causeGuide our leader’s right Help our youth the truth to know In love and honesty to grow And living just and true Great lofty heights attain To build a nation where peace and justice shall reign.";
	
	// Close the file
	file2.close();
	
	// Create and open a text file
	ofstream file3("anthem3.txt");
	
	//cWrite to the file
	file3 << "";
	
	// Close the file
	file3.close();
	
}