#include <iostream>
using namespace std;

int main()
{
    int cel, fah, kel;
    
    cout << "Please enter the temperature in celsius: ";
    cin >> cel;
    cout << "\n";

    fah = 9*cel/5 + 32;
    cout << "The temperature in fahrenheit is: " << fah << "\n\n"; // �lk "\n" olmasayd� iki c�mle biti�ik olurdu, o y�zden bir tane ekledim
                                                                   // ve alt alta yapt�m. Bir tane daha "\n" ekleyerek iki c�mle aras�nda
    kel = cel + 273;                                               // bir bo�luk olu�turdum.
    cout << "The temperature in kelvin is: " << kel << endl;
    
    
    return 0;

}