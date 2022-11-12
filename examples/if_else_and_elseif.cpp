#include <iostream>

int main()
{
	int g;
	std::cout << "Please enter your grade: ";
	std::cin >> g;
	std::cout << "\n";

	
	if (0 <= g && g < 59)
		std::cout << "You scored an F.";

	else if (60 < g && g < 69)
		std::cout << "You scored a D.";

	else if (70 < g && g < 79)
		std::cout << "You scored a C.";

	else if (80 < g && g < 89)
		std::cout << "You scored a B.";

	else if (90 < g && g < 99)
		std::cout << "You scored an A.";

	else if (g == 100)
		std::cout << "Congratulations, you got the perfect score!";

	else
		std::cout << "Error, please try again." << std::endl;


	return 0;

}