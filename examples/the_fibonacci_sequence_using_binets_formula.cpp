#include <iostream>
#include <cmath>

double fibonacci(int n);

int main()
{
	int n{};

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


/* I found this nice formula on internet, it doesn't compute
   every fibonacci number until it hits the nth number unlike recursive fibonacci function, therefore
   it is much faster. It doesn't work after 1475th term.
   
   This formula is known as "Binet's Formula", Phi is golden ratio and phi is its conjugate (1-Phi = -1/Phi). 
   
   Ae+b = a*(10^b) */
double fibonacci(int n)
{
	double Phi = (1 + sqrt(5)) / 2;
	double phi = (1 - sqrt(5)) / 2;

	return ( (pow(Phi, n) - pow(phi, n) ) / sqrt(5));
}