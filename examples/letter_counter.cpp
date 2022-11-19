#include <iostream>
#include <string> // std::string, std::getline ve std::ws için

int main()
{
	std::cout << "Please enter a word or sentence: ";
	std::string word;
	std::getline(std::cin >> std::ws, word); /* The std::ws input manipulator tells std::cin to
											 	ignore any leading whitespace before extraction. */ 
											 
											 /* std::getline ile string giriþi yapmak, std::cin'e kýyasla daha iyidir,
											    std::cin kullanýrken birden fazla kelime girildiðinde sýkýntý çýkabilir. */


	char letter;
	std::cout << "\nPlease enter a letter to count the number of times the letter (please mind the case): ";
	std::cin >> letter;
	
	
	int length = word.length(); // word.length(), verilen word'ün uzunluðunu (harflerin sayýsýný) belirtir.
								// int olan length ile word.length()'teki length, ayný length deðiller.
	
	
	int counter = 0;
	int i = 0;
	
	while (i < length) 
	{
		
		if (word[i] == letter) // The first element of an array is numbered 0 (zero) 
		{					   // Stringlerde karakter sýra numaralarý, sýfýrdan baþlar.
			counter++;
		}
		
		i++;
	}
	
	std::cout << "\nThe number of " << letter << ": " << counter << std::endl;

	return 0;
}