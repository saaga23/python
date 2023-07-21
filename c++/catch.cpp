#include <iostream>
#include <exception>
#include <string>
using namespace std;

class CustomException: public std::exception
{
	string reason;
	public:
		// container, needs reason
		CustomException(const char* why):reason(why) {
		}
		
		// redefining virtual fucntion to return 'reason'
		virtual const char* what() const throw()
		{
			return reason.c_str();
		}
};

double Divide(double dividened, double divisor)
{
	if(divisor == 0)
		throw CustomException("CustomException: Dividing by 0 is a crime");
		
		return (dividened / divisor);
}

int main()
{
	cout << "Enter dividened: ";
	double dividend = 0;
	cin >> dividend;
	cout << "Enter divisor: ";
	double divisor = 0;
	cin >> divisor;
	try
	{
		cout << "Result is: " << Divide(dividend, divisor);
	}
	catch(exception& exp) // catch CustomException, bad_alloc, etc
	{
		cout << exp.what() << endl;
		cout << "Sorry, continue!" << endl;
	}
	
	return 0;
}