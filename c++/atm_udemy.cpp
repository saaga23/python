#include <conio.h>
#include<iostream>
#include<string>
using namespace std;

/* Mini project - ATM
 -> Check Balance
 -> Cash withdraw
 -> User Details
 -> Update Mobile no.
*/

class atm                     // class atm
{
	private:
		long int account_No;	// private member variables
		string name;
		int PIN;
		double balance;
		string mobile_No;
		
	public:
		
		// setData function is setting the data into private member variables
		void setData(long int account_No_a, string name_a,int PIN_a,double balance_a, string mobile_No_a)
		{
			account_No = account_No_a; // assigning the formal arguments to the private member var's
			name = name_a;
			PIN = PIN_a;
			balance = balance_a;
			mobile_No = mobile_No_a;
			
		}
		
		//getAccountNo function is returning the user's account no.
		long int getAccountNo()
		{
			return account_No;
		}
		
		//getName function is retuning the user's Name
		string getName()
		{
			return name;
		}
		//getPIN function is returning the user's PIN
		int getPIN()
		{
			return PIN;
		}
		//getBalance is returning the user's Bank balance
		double getBalance()
		{
			return balance;
		}
		//getMobileNo is returning the user's Mobile No.
		string getMobileNo()
		{
			return mobile_No;
		}
		//setMobile function is updating the user mobile no
		void setMobile(string mob_prev, string mob_new)
		{
			if (mob_prev == mobile_No)	//	itwill check old Mobile no
			{
				mobile_No = mob_new;	// and update with new, if old matches
				cout << endl << "Successfully Updated Mobile no.";
				_getch();			//getch is to hold the screen( untill user press any key)
				
			}
			
			else			// Does not update if old mobile no does not matches
			{
				cout << endl << "Incorrect !!! old Mobile no";
				_getch(); 			// getch is to hold screen (until user press any key)
			}
		}
		// cashWithDraw functon is used to withdraw money from ATM
		void cashWithDraw(int amount_a)
		{
			if (amount_a > 0 && amount_a < balance) // check entered amount validity
			{
				balance -= amount_a;   // balance = balance - amount_a
				cout << endl << "Please Collect Your Cash";
				cout << endl << "Available Balance :" << balance;
				_getch();                  //getch is to hold the screen(until user press any key)
				
			}
			else
			{
				cout << endl << "Invalid Input or Insufficient Balance";
				_getch();		//getch is to hold screen (until user press any key)
			}
		}
			 
};

///////////////////////////////////////////////////////////////////////////////////
int main()
{
	int choice = 0, enterPIN;  //enterPin and enterAccountNo. ---> user authentication
	long int enterAccountNo;
	
	system("cls");
	
	// created user (object)
	atm user1;
	// set User Details (into object)   (setting Default Data)
	user1.setData(1234567, "sunday aspita abraham",1111, 45000.90,"123456789");
	
	
	do
	{
		system("cls");
		
		cout <<endl << "****Welcome to ATM *****" << endl;
		cout << endl << "Enter your account  No: "; // asking user to enter account no
		cin >> enterAccountNo; 
		
		cout << endl << "Enter PIN: ";		// asking user to enter PIN
		cin >> enterPIN;
		
		// check whether enter values matches with user details
		if ((enterAccountNo == user1.getAccountNo() && (enterPIN == user1.getPIN())))
		{
			do
			{
				int amount = 0;
				string oldMobileNo, newMobileNo;
				
				system("cls");
				// user Interface
				cout << endl << "**** welcome to ATM *****" << endl;
				cout << endl << "select Options ";
				cout << endl << "1. check Balance";
				cout << endl << "2. Cash withdrawal";
				cout << endl << "3. show user Details";
				cout << endl << "4. update Mobile no.";
				cout << endl << "5. Exit" << endl;
				cin >> choice;			// taking user choice
				
				switch (choice)        // switch condition
				{
					case 1: 		// if user presses 1
						cout << endl <<"Your Bank Balance is :" << user1.getBalance();
											// getBalance is ... printing the users bank balance
											
						_getch();
						break;
						
						
					case 2:
						cout << endl << "Enter the amount :";
						cin >> amount;
						user1.cashWithDraw(amount);     // calling cashWithdraw function
														// passing the withdraw amount
						break;
						
					case 3:
						cout << endl << "**** User Details are:- ";
						cout << endl << "-> Account no: " << user1.getAccountNo();
						cout << endl << "-> Name     " << user1.getName();
						cout << endl << "-> Balance:  " << user1.getBalance();
						cout << endl << "-> Mobile No. " << user1.getMobileNo();
														// getting and printing user details
						getch();
						break;
						
					case 4:				// if user presses 4
						cout << endl << "Enter old Mobile No. ";
						cin >> oldMobileNo;						// take old mobile no
						
						cout << endl << "Enter New Mobile No. ";
						cin >> newMobileNo;						// take new mobile no
						
						user1.setMobile(oldMobileNo, newMobileNo);  // now set new mobile no
						break;
											// if user pesses 5
					case 5:
						exit(0); 			// exit application
						
					default:				// handle invalid user inputs
						cout << endl << "Enter valid Data. !!!";
				}
			} while (1);       // MENU ?? condition will always True and loop is
								// capable of runnning infinite times
		}
		else 
		{
			cout << " User Details Are Invalid";
		}
		
	}while (1); // LOfin condition Which is always true
	
	return 0;
}