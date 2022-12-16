/* This was my second assignment in Introduction to Programming that was completed on 15 December 2022. 
   The menu part was borrowed from complex_number_calculator.cpp and slightly edited. */

#include <iostream>
#include <cmath>


const double pi = 4 * atan(1); // tan(pi/4) = 1 => pi = 4*(arctan[1])


class Complex
{
    private:
        
        double real;
        double imaginary;
    
    
    public:
       
        Complex(double r = 0, double i = 0)
        {
            real = r;
            imaginary = i;
        }
        
        
        Complex operator+(Complex c)
        {
            Complex temp;
            
            temp.real = real + c.real;
            temp.imaginary = imaginary + c.imaginary;
            
            return temp;
        }
       
        
        Complex operator-(Complex c)
        {
            Complex temp;
            
            temp.real = real - c.real;
            temp.imaginary = imaginary - c.imaginary;
            
            return temp;
        }
        
        
        Complex operator*(Complex c)
        {
            Complex temp;
            
            temp.real = real * c.real - imaginary * c.imaginary;
            temp.imaginary = real * c.imaginary + imaginary * c.real;
            
            return temp;
        }
        
        
        Complex operator/(Complex c)
        {
            Complex temp;
            
            temp.real = (real * c.real + imaginary * c.imaginary) / (c.real * c.real + c.imaginary * c.imaginary);
            temp.imaginary = (imaginary * c.real - real * c.imaginary) / (c.real * c.real + c.imaginary * c.imaginary);
            
            return temp;
        }
        
        
        Complex operator+=(Complex c)
        {
            real += c.real;
            imaginary += c.imaginary;
            
            return *this;
        }
        
        
        Complex operator-=(Complex c)
        {
            real -= c.real;
            imaginary -= c.imaginary;
            
            return *this;
        }
        
        
        Complex operator*=(Complex c)
        {
            real = real * c.real - imaginary * c.imaginary;
            imaginary = real * c.imaginary + imaginary * c.real;
            
            return *this;
        }
        
        
        Complex operator/=(Complex c)
        {
            real = (real * c.real + imaginary * c.imaginary) / (c.real * c.real + c.imaginary * c.imaginary);
            imaginary = (imaginary * c.real - real * c.imaginary) / (c.real * c.real + c.imaginary * c.imaginary);
            
            return *this;
        }
        
        
        double norm()
        {
            return sqrt(real * real + imaginary * imaginary);
        }
        
        
        void polar()
        {
            std::cout << norm() << " * e^(" << atan(imaginary / real)*(180 / pi) << "\370*i)\n";
        }
        // \370, prints the degree sign (°)
        
        
        void print()
        {
            std::cout << real << imaginary << "i\n";
        }
};

int main()
{
    std::cout << std::showpos; // Clarifies the signs of numbers.
    
    double real1{}, imag1{}, real2{}, imag2{};
    int choice{};
    
    std::cout << "Please enter the real part of 1st complex number: ";
    std::cin >> real1;

    std::cout << "Please enter the imaginary part of 1st complex number: ";
    std::cin >> imag1;


    std::cout << "\nPlease enter the real part of 2nd complex number: ";
    std::cin >> real2;

    std::cout << "Please enter the imaginary part of 2nd complex number: ";
    std::cin >> imag2;
    
    
    Complex c1(real1, imag1), c2(real2, imag2), c3;

    
    
    do
    {

        std::cout << "\n\n\n************************************************\n";
        
        c3 = c1;
        std::cout << "The first number (c1): ";
        c3.print();


        c3 = c2;
        std::cout << "The second number (c2): ";
        c3.print();


        std::cout << "\n\nTo add the numbers, press 1.\n"
                     "To subtract the numbers, press 2.\n"
                     "To multiply the numbers, press 3.\n"
                     "To divide the numbers, press 4.\n"
                     "To write both numbers in polar form, press 5.\n"                 
                     "To find the norms of both numbers, press 6.\n"
                     "To replace c1 with c1+c2, press 7.\n"
                     "To replace c1 with c1-c2, press 8.\n"
                     "To replace c1 with c1*c2, press 9.\n"
                     "To replace c1 with c1/c2, press 10.\n"
                     "To exit, press 11. ";



        std::cin >> choice;



        switch (choice)
        {

            case 1:
            {           
                c3 = c1 + c2;
                std::cout << "\n\nThe result of addition is: ";
                c3.print();
            
                break;
            }


            case 2:
            {
            
                c3 = c1 - c2;
                std::cout << "\n\nThe result of subtraction is: ";
                c3.print();
            
                break;

            }


            case 3:
            {
            
                c3 = c1 * c2;
                std::cout << "\n\nThe result of multiplication is: ";
                c3.print();
                    
                break;
            }


            case 4:
            {
            
                c3 = c1 / c2;
                std::cout << "\n\nThe result of division is: ";
                c3.print();
            
                break;
            }


            case 5:
            {
            
                c3 = c1;
                std::cout << "\n\n1st number's polar form is: ";
                c3.polar();

                c3 = c2;
                std::cout << "\n\n2nd number's polar form is: ";
                c3.polar();
                

                break;
            }


            case 6:
            {
            
                c3 = c1;
                std::cout << "\n\nNorm of the 1st complex number: " << c3.norm() << "\n";

                c3 = c2;
                std::cout << "\nNorm of the 2nd complex number: " << c3.norm() << "\n";

                break;
            }


            case 7:
            {
           
                c1 += c2;
                std::cout << "\n\nc1+c2 = ";
                c1.print();

                break;
            }


            case 8:
            {
            
                c1 -= c2;
                std::cout << "\n\nc1-c2 = ";
                c1.print();

                break;
            }


            case 9:
            {
            
                c1 *= c2;
                std::cout << "\n\nc1*c2 = ";
                c1.print();

                break;
            }


            case 10:
            {
            
                c1 /= c2;
                std::cout << "\n\nc1/c2 = ";
                c1.print();

                break;
            }


            case 11:
                break;


            default:
            {
                std::cout << "\n\nInvalid choice... Please enter again.";

                break;

            }


        }


    } while (!(choice == 11));
    

    return 0;
}