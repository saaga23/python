#include <iostream>
int main()
{
	// currval is the number we're counting;we'll read new values into val
	int currval = 0, val = 0;
	// read first number and ensure that we have data to process
	if (std::cin >> currval){
		int cnt = 1;// store the count for the current value we' re processing
		while (std::cin >> val) { // read the remaining numbers
		if (val == currval)  // if the values are the same
			++cnt; 			// add 1 to cnt
		else { // otherwise,print the count for the previous value
			std::cout <<currval << " occurs "
					  << cnt << " times " <<std::endl;
			currval = val;  // remember the new value
			cnt = 1;        // reset the counter
			}
		}	// qhile loop ends here
		// remember to print the count for the last value in the file
		std::cout << currval << " occurs "
				  << cnt << " times " << std:: endl;
	} // outermost if statement ends here
	return 0;
}