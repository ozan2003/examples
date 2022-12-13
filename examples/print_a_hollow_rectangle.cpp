#include <iostream>

int main()
{
	int width{}, height{};

	std::cout << "Enter the width: ";
	std::cin >> width;

	std::cout << "Enter the height: ";
	std::cin >> height;
	std::cout << "\n";
	
	
	
	for (int i = 1; i <= height; ++i)
	{

		for (int j = 1; j <= width; ++j)
		{
			
			if ((i == 1 || 
				 i == height ) ||
				
				(j == 1 || j == width  )) 
			{
				std::cout << "* ";
			}
			else
			{
				std::cout << "  ";
			}
		}

		std::cout << "\n";
	}

	return 0;
}

/*		
		
		|		  |
		|		  |
	----* * * * * *---- 1(i)
		*         *
		*         *
	----* * * * * *---- h
		|		  |
		|		  |
		1         w
	   (j)

		i, sadece 1 ve height'a e�it oldu�unda ve j, sadece 1 ve width'e e�it oldu�unda * yazd�r�l�r.
  
		Di�er durumlarda bo�luk (" ") yazd�r�l�r.

*/