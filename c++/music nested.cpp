// nested if statement
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
	cout << "enter genre" << endl;
	cin >> genre;
	
	if (country == "America")
		{
				if (genre == "R&B")
				{
				cout << "Frank Ocean, Chris Brown, SZA, H.E.R, Micheal Jackson, Whiteney Houston, R.Kelly, Alicia Keys, Usher, Beyonce, Mariah Carey";
				}
				else if (genre == "Pop")
				{
				cout << "Justin Beiber, Ariana Grande, Selena Gomez, Bellie Eilish, Adele, Charlie Puth, Shawn Mendes, The Weekend, Elot John, Burno Mars";
				}
				else if (genre == "Hip-pop/Rap")
				{
				cout << "Eminem, 50 Cent, Drake, Jay-Z, Kendrick Lamar, Lil Wayne, Gucci Mane, J.cole, Future, Lil Baby, Migos, Travis Scott, Cardi B, NF";
				}
				else if (genre == "Afro Beats") 
				{
				cout << "Wizkid, Burna Boy, Timaya, Buju, Tiwa Savage, Ammarae, Fela Kuti, Olamide, Portable, Falz, Davido, Rema, Tekno, P- Square";
				}
				else if (genre == "Rock")
				{
				cout << "Machine Gun Kelly, The Rolling Stones, Imagine dragons, The Beatles, Twenty one Pilots, Maneskin, Miley cyrus, Coldplay, Pink Floyd";
				}
				else
				{
				cout << "Not Found...Try again!";
				}
		}
	else if (country  )
	{
	cout << "Not woked on this country"; 
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}