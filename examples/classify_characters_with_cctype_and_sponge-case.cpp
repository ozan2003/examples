#include <iostream>
#include <string>
#include <cctype>


std::string convert_to_spongecase(std::string s);


int main()
{
	int lowcounter{}, upcounter{}, 
		numbercounter{}, lettercounter{}, punccounter{};
	
	char key{};


	std::string sentence;
	
	std::cout << "Please enter a sentence: \n\n";
	std::getline(std::cin, sentence);

	
	for (int i = 0; i < sentence.length(); ++i)
	{
		/* Checks if a character is lower-case, 
		   returns a non-zero value only for the lower-case letters. */
		if (islower(sentence[i]))
		{
			lowcounter++;
		}


		/* Checks if a character is an upper-case,
		   returns a non-zero value only for the upper-case letters. */
		if (isupper(sentence[i]))
		{
			upcounter++;
		}


		/* Checks if the given character is one of the 10 decimal digits (0 1 2 3 4 5 6 7 8 9),
			returns a non-zero value if the character is a numeric character. */
		if (isdigit(sentence[i]))
		{
			numbercounter++;
		}


		/* Checks if the given character is an alphabetic character 
		   (both uppercase and lowercase letters a through z),
		   returns a non-zero value only for alphabetic characters */
		if (isalpha(sentence[i]))
		{
			lettercounter++;
		}
		

		/* Checks if a character is a punctuation character
		   !"#$%&'()*+,-./:;<=>?@[\]^_`{|}~
		   returns non-zero value if the character is a punctuation character.
		   */
		if (ispunct(sentence[i]))
		{
			punccounter++;
		}
	}

	
	std::cout << "\nThere are " << lettercounter << " letters in total.\n";
	std::cout << "There are " << lowcounter << " lower-case letters.\n";
	std::cout << "There are " << upcounter << " upper-case letters.\n";
	std::cout << "There are " << numbercounter << " digits.\n";
	std::cout << "There are " << punccounter << " punctuation marks.\n\n";

	
	
	
	std::cout << "If you want to convert it to sponge-case, press y. ";
	std::cin >> key;
	std::cout << "\n";

	if (key == 'y' || key == 'Y')
	{
		std::cout << convert_to_spongecase(sentence) << "\n";
	}

	return 0;

}

std::string convert_to_spongecase(std::string s)
{
	for (int i = 0; i < s.length(); ++i)
	{
		if (i % 2 == 0)
		{
			s[i] = toupper(s[i]);
		}
		/* toupper converts a character to its respective upper-case. */

		else
		{
			s[i] = tolower(s[i]);
		}
		/* tolower converts a character to its respective lower-case. */
	}

	return s;
}

