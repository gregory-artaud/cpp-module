#include "whatever.hpp"
#include <iostream>
#include <string>

int main()
{
	int a, b;
	double c, d;
	std::string e, f;

	a = 1;
	b = 2;
	c = 3.0;
	d = 4.0;
	e = "abc";
	f = "def";

	std::cout << "a = " << a << std::endl;
	std::cout << "b = " << b << std::endl;
	std::cout << "c = " << c << std::endl;
	std::cout << "d = " << d << std::endl;
	std::cout << "e = " << e << std::endl;
	std::cout << "f = " << f << std::endl;

	std::cout << "SWAP !!" << std::endl;
	swap(a, b);
	swap(c, d);
	swap(e, f);

	std::cout << "a = " << a << std::endl;
	std::cout << "b = " << b << std::endl;
	std::cout << "c = " << c << std::endl;
	std::cout << "d = " << d << std::endl;
	std::cout << "e = " << e << std::endl;
	std::cout << "f = " << f << std::endl;

	std::cout << "min(a, b) = " << min(a, b) << std::endl;
	std::cout << "min(c, d) = " << min(c, d) << std::endl;
	std::cout << "min(e, f) = " << min(e, f) << std::endl;

	std::cout << "max(a, b) = " << max(a, b) << std::endl;
	std::cout << "max(c, d) = " << max(c, d) << std::endl;
	std::cout << "max(e, f) = " << max(e, f) << std::endl;
	return 0;
}