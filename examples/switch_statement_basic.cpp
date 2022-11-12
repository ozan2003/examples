#include <iostream>
using namespace std;

int main()
{
	cout << "Which beverage do you want? (1-Coke, 2-Water, 3-Sprite, 4-Mountain Dew, 5-Milk)" << "\n\n";
	int x;
	cin >> x;
	cout << "\n";


	switch (x)
	{
	 case 1:
		cout << "Here is your Coke.";
		break;

	 case 2:
		 cout << "Here is your Water.";
		 break;

	 case 3:
		 cout << "Here is your Sprite.";
		 break;
	 
	 case 4:
		 cout << "Here is your Mountain Dew.";
		 break;

	 case 5:
		 cout << "Here is your Milk.";
		 break;

	 default:
		 cout << "Error. The choice was not valid, here is your money back." << endl;
	}
		
	return 0;
			
}