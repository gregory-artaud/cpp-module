#include "iter.hpp"
#include <iostream>
#include <string>

template <typename T>
void print(T & a)
{
	std::cout << a << std::endl;
}

int main()
{
	int array[5] = {1, 2, 3, 4, 5};
	std::string str[5] = {"one", "two", "three", "four", "five"};

	iter(array, 5, &print);
	iter(str, 5, &print);
	return (0);
}