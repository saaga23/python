// C# implementation to demonstrate
// the Boxing
using System;
class GFG {

	// Main Method
	public void Main()
	{

		// assigned int value
		// 2020 to num
		int num = 2020;

		// boxing
		object obj = num;

		// value of num to be change
		num = 100;

		System.Console.WriteLine
		("Value - type value of num is : {0}", num);
		System.Console.WriteLine
		("Object - type value of obj is : {0}", obj);
	};
}
