#include <iostream>
#include <string>

int main()
{
	std::string string{};
	std::getline(std::cin >> std::ws, string);


	std::string vowels{"aeiouAEIOU"}; // I've included all vowels, both upper and lower-case.


	for (int i{}; i < string.length(); ++i)
	{
		for (int j{}; j < vowels.length(); ++j) // It checks every vowel -both upper and lower case- for every character of string.
		{
			if (string[i] == vowels[j])
			{
				string.erase(string.begin() + i);

				/* 
				   
				   std::string example = "Et sit luptatum in duis at dolor"
										            ^
				   't' == example.begin() + 10

				   begin() returns the first (zeroeth) character whereas end() returns the last.
					
				*/


				/*
					
					std::string example = "Eu placerat et dolor"

					example.erase(4,3) // "Eu placerat et dolor" => "Eu perat et dolor"
										       ^^^
										       456

					example.erase( example.begin() + 7 ) // "Eu placerat et dolor" => "Eu placrat et dolor"
																	^
				*/

			}
		}
	}

	std::cout << "\n\n*Vowels removed*\n\n\n" << string << '\n';

	return 0;
}