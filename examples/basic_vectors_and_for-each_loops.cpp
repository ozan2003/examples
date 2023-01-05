#include <iostream>
#include <vector> // You should include "vector" library to use vectors.


int main()
{
	// This is a vector named "vector" comprised of 11 elements. Vector elements can be accessed like arrays.
	// 
	// Vectors can be initialized to specific values through brace initialization [std::vector<int> vector{0, 2, 4}],
	// or it can be paranthesis initialized to initialize the vector to a specific size (elements will be initialized to "0")
	// [std::vector<int> vector(3)].
	std::vector<int> vector{0, 2, 4, 6, 8, 10, 12, 14, 16, 18, 20};


	std::cout << "The vectors elements are: ";
	// This is a for-each loop (or range based for loop), i represents the first element of
	// the vector, it iterates through every element. It can also be used on arrays.
	//
	// References can be used for preventing copying vector elements which is can be expensive.
	// It also allows modifying elements.
	// 
	// "auto" allows the compiler to deduce(decide) the type of an object.*/
	for (auto& i : vector)
	{
		std::cout << i << " ";
	}
	std::cout << "\n";
	
	
	std::cout << "The vectors size is: " << vector.size(); // size() function, returns the number of elements of vector.
	std::cout << "\n\n";

	
	for (auto& i : vector)
	{
		i *= i; // Every element is being multiplied by itself.
	}


	std::cout << "The elements after being squared are: ";
	for (auto& i : vector)
	{
		std::cout << i << " ";
	}
	std::cout << "(note that the vector's elements are updated)\n\n";


	int element{};

	for (int i{ 0 }; i < 5; ++i)
	{
		std::cout << "Enter element #" << i + 1 << " of 5: ";
		std::cin >> element;

		vector.push_back(element); // push_back(), adds an element to the end.
	}


	std::cout << "\nThe new vectors elements are: ";
	for (auto& i : vector)
	{
		std::cout << i << " ";
	}
	

	std::cout << "\nThe size is now: " << vector.size() << "\n";

	// There are other functions defined in vector library,
	// for example front() returns the first element of vector whereas back() returns the last element.
	// 
	// resize() function resizes the vector, new elements will be initialized to "0" and current elements
	// will be preserved.


	return 0;
}