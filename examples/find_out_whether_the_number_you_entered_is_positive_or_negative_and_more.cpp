#include <iostream>
using namespace std;


int main()
{
	int i{}, number{}, numberAmount{}, positiveAmount{}, negativeAmount{}, zeroAmount{};
	int oddAmount{}, evenAmount{};

	cout << "Please enter the number of the numbers you want to enter in: ";
	cin >> numberAmount;
	cout << "\n";

	for (i = 1; i <= numberAmount; i++) /* i; i'den numberAmount'a kadar (numberAmount dahil) birer birer her artt���nda yaz� yaz�l�r,
										   numberAmount'a geldikten sonra ise yaz�lma i�lemi durur, sonra program a�a�� iner. */
	{
		cout << "Enter the number " << i << ": ";
		cin >> number;
		cout << "\n";


		if (number > 0)
		{
			positiveAmount += 1; // positiveAmount += 1 -> positiveAmount = positiveAmount + 1
		}						 // Her pozitif bir say� g�rd���nde de�er; birer birer artar, saya� gibi d���n.

		else if (number == 0)
		{
			zeroAmount += 1;
		}

		else
		{
			negativeAmount += 1;
		}

		
		if (number % 2 == 0)
		{
			evenAmount += 1;
		}

		else
		{
			oddAmount += 1;
		}
	}

	cout << "\nThere are " << positiveAmount << " positive numbers." << "\n\n";
	cout << "There are " << negativeAmount << " negative numbers." << "\n\n";
	cout << "There are " << zeroAmount << " zeros." << "\n\n\n";
	
	cout << "There are " << oddAmount << " odd numbers." << "\n\n";
	cout << "There are " << evenAmount << " even numbers." << "\n\n";
	

	return 0;

}

/* �ngilizce'de number, say�labilen �eylerin say�s�nda; amount ise say�lamayan �eylerin miktar�nda kullan�l�r.
   "positiveNumber"�n nicelik de�il de bir pozitif say�ym�� gibi alg�lanabilece�ini d���nd���m i�in
   "positiveAmount"u kas�tl� kulland�m. */