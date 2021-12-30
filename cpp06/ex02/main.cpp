#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <iostream>
#include <cstdlib>

Base* generate(void)
{
	int n = std::rand() % 3;

	std::cout << "generated : " << std::endl;
	switch (n)
	{
		case 0:
			std::cout << "A" << std::endl;
			return (new A);
		case 1:
			std::cout << "B" << std::endl;
			return (new B);
		case 2:
			std::cout << "C" << std::endl;
			return (new C);
		default:
			return (NULL);
	}
}

void identify(Base* b)
{
	std::cout << "identify_ptr : " << std::endl;
	if (dynamic_cast<A*>(b))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(b))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(b))
		std::cout << "C" << std::endl;
	else
		std::cout << "unknown" << std::endl;
}

void identify(Base & b)
{
	std::cout << "identify_ref : " << std::endl;
	try
	{
		(void)dynamic_cast<A&>(b);
		std::cout << "A" << std::endl;
	}
	catch(std::exception & e) {}
	try
	{
		(void)dynamic_cast<B&>(b);
		std::cout << "B" << std::endl;
	}
	catch(std::exception & e) {}
	try
	{
		(void)dynamic_cast<C&>(b);
		std::cout << "C" << std::endl;
	}
	catch(std::exception & e) {}
}

int main()
{
	Base *b;

	std::srand(time(NULL));
	b = generate();
	identify(b);
	identify(*b);
	delete b;
	return (0);
}