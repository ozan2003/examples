#include <iostream>

int factorial(int val)
{
	if (val > 1)
		return factorial(val - 1) * val; 

	return 1;
}

/*

val=5 alalým

factorial(5) =  factorial(4) * 5
				
			 = (factorial(3) * 4) * 5
			
			 = (factorial(2) * 3) * 4 * 5

			 = (factorial(1) * 2) * 3 * 4 * 5

			 = 1 * 2 * 3 * 4 * 5
*/

int main()
{
	int n;
	std::cin >> n;
	std::cout << "\n";
	
	std::cout << factorial(n);

	return 0;
}