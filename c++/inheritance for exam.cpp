#include<iostream>
#include<string>
#include<cmath>
using namespace std;


	class method1{
		public:
			int x;
			float square_of(int x)
			{
				float product = x * x;
				return product;
			}
			
		
	};
	class method2 : public method1{
		public:
			float square_root()
			{
				float root;
				root = sqrt(product);
				return root;
			}
	};
	int main(){
		 cout << "enter integer value";
		 method1 square;
		 method2 rooter;
		 cin >> square.x;
		 cout << rooter.square_of()<< endl;
	}
