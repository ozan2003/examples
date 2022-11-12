#include <iostream>
using namespace std;

int main()
{
    int cel, fah, kel;
    
    cout << "Please enter the temperature in celsius: ";
    cin >> cel;
    cout << "\n";

    fah = 9*cel/5 + 32;
    cout << "The temperature in fahrenheit is: " << fah << "\n\n"; // Ýlk "\n" olmasaydý iki cümle bitiþik olurdu, o yüzden bir tane ekledim
                                                                   // ve alt alta yaptým. Bir tane daha "\n" ekleyerek iki cümle arasýnda
    kel = cel + 273;                                               // bir boþluk oluþturdum.
    cout << "The temperature in kelvin is: " << kel << endl;
    
    
    return 0;

}