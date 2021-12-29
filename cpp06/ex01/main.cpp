#include "Data.hpp"
#include <iostream>
#include <stdint.h>

uintptr_t serialize(Data* ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);
}

Data* deserialize(uintptr_t ptr)
{
	return reinterpret_cast<Data*>(ptr);
}

int main()
{
	Data d;
	uintptr_t value;

	value = serialize(&d);
	std::cout << "value = " << value << std::endl;
	std::cout << "&d = " << &d << std::endl;
	if (deserialize(value) == &d)
		std::cout << "OK" << std::endl;
	else
		std::cout << "KO" << std::endl;
	return (0);
}