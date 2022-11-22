#include <iostream>

int main()
{
	int i{10};

	std::cout << ++i << "\n"; // output is 11, i is 11
	
	std::cout << i++ << "\n"; // output is 11, i is 12
	
	std::cout << i;			  // output is 12


	return 0;
}