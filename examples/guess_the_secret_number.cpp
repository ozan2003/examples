#include <iostream>
#include <time.h> // for time()

int target{0}, guess{0};

int main()
{
	int counter{},choice;

	srand(time(0));
	
	L12: 
	std::cout << "Can you find the secret number between 1 and 100?";
	
	std::cout << "\nPress 1 to find it yourself, or press 2 to have me find it: ";
	std::cin >> choice;
	std::cout << "\n";

	switch (choice)
	{
		case 1:
		{
			std::cout << "Please enter the number: ";
			
			target = (rand() % 100) + 1; /* bunu do - while'ın içine alırsan, 
											her sayı girdiğinde farklı bir sayı oluşturulur
											ki bu da sayıyı bulmayı neredeyse imkansız yapar. */
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
			std::cout << "It took " << counter << " times to find it.\n";
		}
		break;

		
		case 2:
		{
			std::cout << "\nEnter the number that you want me to find: ";
			
			std::cin >> target;
			std::cout << "\n";

			do
			{
				 guess = (rand() % 100) + 1; /* case 1'in aksine bunu içe aldım, 
												yoksa bilgisayar sürekli aynı sayıyı girer durur. */

				 if (guess < target)
				 {
					 std::cout << guess << " is too high... \n";
				 }
				 if (guess > target)
				 {
					 std::cout << guess << " is too low... \n";
				 }

				 counter++;


			} while (guess != target);

			std::cout << "\nI have found the number!\n\n" 
						 "It took " << counter << " times to find it.\n";
		}
		break;

		default:
		{
			std::cout << "You're supposed to enter 1 or 2.\n\n";
			goto L12;
		}
		
	}
	
	return 0;
}