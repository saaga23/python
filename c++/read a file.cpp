#include <iostream>
#include <fstream>
using namespace std;

int main(){
	string myText;
	myText="Nigeria Arise, O Compatriots,Nigeria's call obey To serve our Fatherland With love and strength and faith.The labour of our heroes past Shall never be in vain,To serve with heart and might One nation bound in freedom, peace and unity.";
	
	ofstream Read("filename.txt");
	Read << "what could be inside this file";
	Read.close();
	ifstream Read("filename.txt");
	while (getline (MyReadFile, myText)) {
		// Output the text from the file
		cout << myText;
	}
	Read.close();
}