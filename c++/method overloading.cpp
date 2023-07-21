#include <iostream>
using namespace std;
class addition
{
	public:
		int addMethod(int x, int y)
		{
			return x + y;
		}
		int addMethod(int x, int y, int z)
		{
			return x + y + z;
		}
};

int main(){
	addition add;
	cout << "5 + 6 = " << add.addMethod(5,6) << endl;
	cout << "1 + 2 + 3 = " << add.addMethod(1,2,3) << endl;
	return 0;
}