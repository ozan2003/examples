#include <iostream>
#include <string> // std::string, std::getline ve std::ws i�in

int main()
{
	std::cout << "Please enter a word or sentence: ";
	std::string word;
	std::getline(std::cin >> std::ws, word); /* The std::ws input manipulator tells std::cin to
											 	ignore any leading whitespace before extraction. */ 
											 
											 /* std::getline ile string giri�i yapmak, std::cin'e k�yasla daha iyidir,
											    std::cin kullan�rken birden fazla kelime girildi�inde s�k�nt� ��kabilir. */


	char letter;
	std::cout << "\nPlease enter a letter to count the number of times the letter (please mind the case): ";
	std::cin >> letter;
	
	
	int length = word.length(); // word.length(), verilen word'�n uzunlu�unu (harflerin say�s�n�) belirtir.
								// int olan length ile word.length()'teki length, ayn� length de�iller.
	
	
	int counter = 0;
	int i = 0;
	
	while (i < length) 
	{
		
		if (word[i] == letter) // The first element of an array is numbered 0 (zero) 
		{					   // Stringlerde karakter s�ra numaralar�, s�f�rdan ba�lar.
			counter++;
		}
		
		i++;
	}
	
	std::cout << "\nThe number of " << letter << ": " << counter << std::endl;

	return 0;
}