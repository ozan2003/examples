#include <iostream>
#include <string>
#include <cmath>


int main()
{
	long long decimal{};
	int power{};

	std::string binary{};

	std::cout << "Enter the binary number: ";
	std::cin >> binary;


	for (int i = binary.length()-1; i>=0; --i, ++power)
	{
		if (binary[i] == '1')
		{
			decimal += pow(2, power);
		}

		if ( (binary[i] != '1') && (binary[i] != '0') )
		{
			std::cout << "\nThe binary number must be comprised of zeroes and ones...\n";
			
			return -1;
		}		
	}
	
	std::cout << "\nDecimal form: " << decimal;

	return 0;
}