#include <iostream>
using namespace std;

int getSomeValue() // The function returns an integer.
{
	int a{};
	cout << "Enter some number: ";
	cin >> a;
	cout << "\n";
	
	return a; // The function will have returned the value that has been entered.
}

int main()
{
	int b{ getSomeValue() }; // b is initialized by the return value of said function (line 11).

	cout << b << " tripled is: " << 3 * b;

	return 0; // 0 means that the program executed successfully.
}