#include <iostream>
#include <string>
using namespace std;
int main()
{
	int stockA;
	int stockB;
	string choice;
	cout << "for 'stockA' or 'stockB'" << endl;
	cin >> choice;
	if (choice == "stockA")
	{
		cout << "enter current value of stockA" << endl;
		cin >> stockA;
	
		if (stockA > 20000)
		{
				cout << "you can sell for a 30%  profit" << endl;
		
			if (stockA > 40000)
			{
				cout << "selling now will earn you an additional 30% profit " << endl;
			
				if (stockA > 80000)
				{
					cout << "selling now will earn an additional  40% interest its advisable you sell now" << endl;
		 		}
			}
		}
		else
		{
			cout << "its not wise to sell now " << endl;
		}
	}
	else if (choice == "stockB")
	{
		cout << "enter current value for stockB" << endl;
		cin >> stockB;
		
		if (stockB > 12000)
		{
				cout << "selling now will earn you a profit of 30% " << endl;
		
			if (stockB > 15000)
			{
				cout << "selling now will earn you additional  profit of 30% " << endl;
			
				if (stockB > 20000)
				{
					cout << "selling now will earn an additional profit of 40% so its advisable you sell now" << endl;
		 		}
			}	
		}
		else
		{
			cout << "its not wise to sell now " << endl;
		}
	
	}
	else 
	{
		cout << "stock analysis not available at the moment" << endl;
	}
return 0;
}