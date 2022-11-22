#include <iostream>
#include <time.h> // for time()

int target, guess{0};

int main()
{
	int counter{};

	srand(time(0));
	target = (rand() % 100) + 1; // generate random number between 1 and 100
	

	std::cout << "Can you find the secret number between 1 and 100: ";
	
	do
	{
		std::cin >> guess;
		std::cout << "\n";

		if (target < guess)
		{
			std::cout << guess << " is too high... ";
			
		}
		if (target > guess)
		{
			std::cout << guess << " is too low... ";
		}

		++counter;

	} while (guess != target);

	std::cout << "Congrats, you have found the number!\n\n";
	std::cout << "It took " << counter << " times to find the secret number.\n";

	return 0;
}