#include <iostream>
using namespace std;
class addition
{
	public:
		int addMethod(int x, int y)
		{
			return x + y;
		}
		float addMethod(float x, float y, float z)
		{
			return x + y + z;
		}
};

int main(){
	addition add;
	cout << "5 + 6 = " << add.addMethod(4,6) << endl;
	cout << "1.4 + 1.5 + 1.6 = " << add.addMethod(2,6,6) << endl;
	return 0;
}