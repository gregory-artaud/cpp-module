#include "Converter.hpp"

int main(int argc, char const *argv[])
{
	Converter *c;

	if (argc != 2)
	{
		std::cout << "Usage: ./convert [litteral number]" << std::endl;
		return (EXIT_FAILURE);
	}
	c = new Converter(argv[1]);
	//std::cout << *c << std::endl;
	std::cout << "char: " << c->toChar() << std::endl;
	std::cout << "int: " << c->toInt() << std::endl;
	std::cout << "float: " << c->toFloat() << std::endl;
	std::cout << "double: " << c->toDouble() << std::endl;
	return EXIT_SUCCESS;
}