#include <iostream>
#include <fstream>
using namespace std;

int main() {
	// Create and open a text file
	ofstream First("filename.txt");
	
	// Write to the file
	First << "Files can be tricky, but it is fun enough!";
	
	// Close the file
	First.close();
}