#include <iostream>
using namespace std;


int main()
{
	int i{}, number{}, numberAmount{}, positiveAmount{}, negativeAmount{}, zeroAmount{};
	int oddAmount{}, evenAmount{};

	cout << "Please enter the number of the numbers you want to enter in: ";
	cin >> numberAmount;
	cout << "\n";

	for (i = 1; i <= numberAmount; i++) /* i; i'den numberAmount'a kadar (numberAmount dahil) birer birer her arttýðýnda yazý yazýlýr,
										   numberAmount'a geldikten sonra ise yazýlma iþlemi durur, sonra program aþaðý iner. */
	{
		cout << "Enter the number " << i << ": ";
		cin >> number;
		cout << "\n";


		if (number > 0)
		{
			positiveAmount += 1; // positiveAmount += 1 -> positiveAmount = positiveAmount + 1
		}						 // Her pozitif bir sayý gördüðünde deðer; birer birer artar, sayaç gibi düþün.

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

/* Ýngilizce'de number, sayýlabilen þeylerin sayýsýnda; amount ise sayýlamayan þeylerin miktarýnda kullanýlýr.
   "positiveNumber"ýn nicelik deðil de bir pozitif sayýymýþ gibi algýlanabileceðini düþündüðüm için
   "positiveAmount"u kasýtlý kullandým. */