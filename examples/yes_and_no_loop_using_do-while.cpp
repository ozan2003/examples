#include <iostream>
#include <cmath> // for "log" function.

int main()
{
	int opr;
	double num1{}, num2{};
	char choice;


	do
	{
		std::cout << "Please enter the first number: ";
		std::cin >> num1;
		std::cout << "\n";

		std::cout << "Please enter the second number: ";
		std::cin >> num2;
		std::cout << "\n";

		
		std::cout << "Please choose the operation you want to (1-Add, 2-Subtract, 3-Multiply, 4-Divide";
		std::cout << "\n                                         5-Logarithm, base first, of second)";

		std::cin >> opr;
		std::cout << "\n";

		switch (opr)
		{
		case 1:
			std::cout << num1 << "+" << num2 << "= " << num1 + num2;
			break;

		case 2:
			std::cout << num1 << "-" << num2 << "= " << num1 - num2;
			break;

		case 3:
			std::cout << num1 << "*" << num2 << "= " << num1 * num2;
			break;

		case 4:
			std::cout << num1 << "/" << num2 << "= " << num1 / num2;
			break;

		case 5:
			std::cout << "The logarithm of " << num1 << " to the base " << num2 << " = " << log(num1) / log(num2);
			break;
		
			// log of a to the base b = log_c(a)/log_c(b)

		default:
			std::cout << "Invalid choice... please enter again.";
			break;
		}


		std::cout << "\n\nWant to do again? (Y/N)";
		std::cin >> choice;
		std::cout << "\n\n";

	} while (choice == 'y' || choice == 'Y');

	
	return 0;
}

/* Yes/No döngüsü yapmak istediðin kýsmý do-while'ýn içine al
   (Önce bir char tanýmla, onu while'da kullanacaksýn.)   */