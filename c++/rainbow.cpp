#include<iostream>
using namespace std;
int main()
{
	enum rainbow
	{
		red = 0,
		orange,
		yellow,
		green ,
		blue,
		indigo,
		violet
	};
	cout <<"Find color of the rainbow enter color in small case to check!" << endl;
	cout << " Enter a color such as red = 0" << endl;
	
	int color = red;
	cin >> color;
	
	switch (color)
	{
	case red:
		cout << "red is a color of the rainboe" << endl;
		break;
		
	case orange:
		cout << "orange is a color of the rainbow" << endl;
		break;
		
	case yellow:
		cout << "Yellow is a color of the rainbow" << endl;
		break;
		
	case green:
		cout << "Green is a color of the rainbow" << endl;
		break;
		
	case blue:
		cout << "Blue is a color of the rainbow" << endl;
		break;
		
	case indigo:
		cout << "indigo is a color of the rainbow" << endl;
		break;
		
	case violet:
		cout << "violet is a color of the rainbow" << endl;
		break;
		
	default:
		cout << "Wrong input, execute again" << endl;
		break;
	}
	return 0;
}