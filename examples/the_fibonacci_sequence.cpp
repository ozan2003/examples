#include <iostream>


unsigned fibonacci(int n);


int main()
{
	int n;

	std::cout << "The Fibonnaci Sequence Demonstration\n"
				 "-------------------------------------\n"
				 "Enter a natural number : ";
	
	std::cin >> n;

	for (int i = 0; i < n; ++i)
	{
		std::cout << "\nTerm " << i + 1 << ": \t" << fibonacci(i);
	}

	return 0;
}





unsigned fibonacci(int n) // unsigned: non-negative integer (0, 1, 2, ... 999)
{
	
	if (n < 2)
	{
		return n;
	}
	
	return fibonacci(n - 2) + fibonacci(n - 1); // A recursive function is a function that calls itself.
	
}

/* The Fibonnaci Sequence:
*
*  0, 1, 1, 2, 3, 5, 8, 13, 21, 34, ... 
* 
*  1. 2. 3. 4. 5. 6. 7. 8.  9.  10.
* 
*  fib(1) = 0
*  fib(2) = 1
* 
*  fib(3) = fib(2) + fib(1)
*  fib(4) = fib(3) + fib(2)
*  fib(5) = fib(4) + fib(3)
* 
*  ...    = ...    + ...
* 
*  fib(n) = fib(n-1) + fib(n-2)
*
*
*/