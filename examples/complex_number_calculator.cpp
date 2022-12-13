#include <iostream>
#include <complex>
#include <cmath>



void print_in_standart_form(std::complex<double> c);

const double pi = 4 * atan(1);



int main()
{
	
	std::cout << std::showpos; // Sayýlarýn iþaretini belirginleþtirir.
	
	
	double real1{}, imag1{}, real2{}, imag2{};
	int menuchoice{};

	
	
	std::cout << "Please enter the real part of 1st complex number: ";
	std::cin >> real1;
	
	
	std::cout << "Please enter the imaginary part of 1st complex number: ";
	std::cin >> imag1;

	
	
	std::cout << "\nPlease enter the real part of 2nd complex number: ";
	std::cin >> real2;
	
	std::cout << "Please enter the imaginary part of 2nd complex number: ";
	std::cin >> imag2;

	
	
	
	std::complex<double> c1(real1, imag1); // std::complex<double> c(a, b) => c = a+bi; i = sqrt(-1).
	std::complex<double> c2(real2, imag2);

	
	
	
	
	do
	{
		
		std::cout << "\n\n\n\n**************************************\n";
		std::cout << "The first number: ";
		print_in_standart_form(c1);
	
		
		std::cout << "\nThe second number: ";
		print_in_standart_form(c2);
		
		 
		std::cout << "\n\nTo add the numbers, press 1.\n"
					 "To subtract the numbers, press 2.\n"
					 "To multiply the numbers, press 3.\n"
					 "To divide the numbers, press 4.\n"
					 "To write both numbers in polar form, press 5.\n"
					 "To find the norms of both numbers, press 6.\n"
					 "To exit, press 7. ";


		
		
		std::cin >> menuchoice;

		
		
		switch (menuchoice)
		{
			
			case 1:
			{
				std::cout << "\n\nThe result of addition is: ";
				print_in_standart_form(c1 + c2);

				break;
			}

			
			case 2:
			{
				std::cout << "\n\nThe result of subtraction is: ";
				print_in_standart_form(c1 - c2);
				break;

			}

			
			case 3:
			{
				std::cout << "\n\nThe result of multiplication is: ";
				print_in_standart_form(c1 * c2);

				break;
			}

			
			case 4:
			{
				std::cout << "\n\nThe result of division is: ";
				print_in_standart_form(c1 / c2);

				break;
			}

			
			case 5:
			{
				std::cout << "\n\n1st number's polar form is: " 
				<< std::abs(c1) << "[" << "cos(" << std::arg(c1) * (180/pi) << "\370)+i*sin(" << std::arg(c1) * (180/pi) << "\370)]";

				std::cout << "\n2nd number's polar form is: " 
				<< std::abs(c2) << "[" << "cos(" << std::arg(c2) * (180/pi) << "\370)+i*sin(" << std::arg(c2) * (180/pi) << "\370)]";

				break;
			} // \370 prints the degree sign (°).

			
			case 6:
			{
				std::cout << "\n\nNorm of 1st number: " << std::norm(c1);

				std::cout << "\nNorm of 2nd number: " << std::norm(c2);

				break;
			}

			
			case 7:
				break;

			
			default:
			{
				std::cout << "\n\nInvalid choice... Please enter again.";

				break;

			}


		}


	} while (!(menuchoice == 7));
	
	
	

	return 0;
}


// (a,b) biçiminden a+bi biçimine geçiþ yapmayý saðlar.
void print_in_standart_form(std::complex<double> c)
{
	std::cout << c.real() << c.imag() << "i ";
}

