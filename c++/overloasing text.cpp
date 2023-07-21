#include <iostream>
using namespace std;

double aveg(double n1, double n2) {return((n1+n2) / 2.0); }
double aveg(double n1, double n2, double n3) {return((n1+n2+n3) / 3.0); }

int main(){
	 cout << aveg(2, 4); 
	 cout << aveg(4.5, 3.5, 1.0);
	 cout << aveg (3.0, 6.0);
	 
	
	 return 0;
}