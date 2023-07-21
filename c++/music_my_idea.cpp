// creating a sample of spotify software
#include <iostream>
#include <string>
using namespace std;

int main()
{
	
	// declaration of variable 
	string name;
	string email;
	string country;
	string genre;
	string user_choice;
	
	// assigning input to variables declared above
	cout << "enter your name " << endl;
	cin >> name;
	cout << "enter email" << endl;
	cin >> email;
	cout <<"enter country(nigeria/america) " << endl;
	cin >> country;
	
	
	// choosing pattern of call
	if (country == "nigeria")
		{
			cout << "do you like olamide or  phyno or wizkid or naira marley" << endl;
			cin >> user_choice;
		
			if (user_choice == "olamide")
			{	
				string user_choiceA;
				cout << "will you like to listen to portable zazu, victor AD, lil kesh (yes/no)" << endl;
				cin >> user_choiceA;
			
				if (user_choiceA == "yes")
				{
					cout << "preparing a playist for you containg the sure street vibez for you" << endl;	
				}
			if (user_choice == "wizkid")
			{
				
				string user_choiceB;
				cout << "do you  like to listen to starboy,burna boy, mr eazi (yes/no)" << endl;
				cin >> user_choiceB;
			
				if (user_choiceB == "yes")
				{
			
					cout << "preparing a playlist containing your favorite international " << endl;
				}
			}
			if (user_choice == "naira marley")
			{
				string user_choiceC;
				cout << "you may also like to listen to mohbad, zinoleesky, fabian" << endl;
				
				cin >> user_choiceC;
				if (user_choiceC == "yes")
				{
					cout << "deep street music" << endl;
				
				}
			
			}
	}
	
	if (country == "america")
		{	
		cout << "do you like eminem or beyonce or rihanna" << endl;
		if (user_choice == "eminem")
			{
				string user_choice1;
				cout << "will  you also like to listen to similar artist (yes/no)" << endl;
				cin >> user_choice1;
					{
						cout << "preparing a playlist containing rappers such as snoop dogs and dre" << endl;
					}
			}
	
		if (user_choice == "beyonce")
			{
				string user_choice2;
				cout << "will you also like to listen to similar artist (yes/no)" << endl;
				if (user_choice2 == "yes")
					{
						cout << "preparing a playlist containing artist such as solange, mariah carey" << endl;
			
					}
			}
		if (user_choice == "rihanna")
			{
				string user_choice3;
				cout << "will you also like to listen to similar artist (yes/no)" << endl;
				if (user_choice3 == "yes")
					{
						cout << "preparing a playlist containing artist such as ariana grande, ciara" << endl;
					}
			}
	
		}
	else
		{
			cout <<  "not worked on this country try again later" << endl;
		}
	return 0;
}}