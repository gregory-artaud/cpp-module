#include <iostream>
#include <string>
#include "Array.hpp"

template <typename T>
void print_array(Array<T> const & array)
{
	for (unsigned int i = 0; i < array.size(); i++)
		std::cout << array[i] << " ";
	std::cout << std::endl;
}

int main()
{
	Array<int> array;

	std::cout << "array.size() = " << array.size() << std::endl;

	Array<int> array2(5);
	Array<int> array3(array2);

	std::cout << "array2.size() = " << array2.size() << std::endl;
	std::cout << "array3.size() = " << array3.size() << std::endl;
	print_array(array2);
	print_array(array3);

	for (unsigned int i = 0; i < array2.size(); i++)
		array2[i] = i;
	print_array(array2);
	print_array(array3);
	for (unsigned int i = 0; i < array3.size(); i++)
		array3[i] = i + 10;
	print_array(array2);
	print_array(array3);
	try
	{
		std::cout << array2[5] << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << "Exception: " << e.what() << std::endl;
	}
	return (0);
}