// I've managed to solve Project Euler's Problem 3 thanks to this code.
#include <iostream>

int main()
{
	unsigned long long number{};
	int factor{2}, sum{}; // 2 is the smallest prime number, we will start dividing the number from 2.


	std::cout << "Enter a number: ";
	std::cin >> number;
	

	std::cout << "\nThe prime factors are: ";
	

	while ( (number >= factor) ) // The entered number must be positive and the number shouldn't be lower than factor.
	{
		if (number % factor == 0) // Checks if the number is evenly divisible with factor.
		{
			std::cout << factor << ' ';

			number /= factor; // Once the prime factor found, divide the number with it and then increase factor by one.

			sum += factor;
		}
		++factor;
	}

	std::cout << "\nThe sum of prime factors are: " << sum << "\n";


	return 0;
}