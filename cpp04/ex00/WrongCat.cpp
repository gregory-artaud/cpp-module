#include "WrongCat.hpp"  
	
WrongCat::WrongCat()
{
	std::cout << "WrongCat default constructor called" << std::endl;
	this->type = "WrongCat";
}
	
WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &c)
{
	std::cout << "WrongCat copy constructor called" << std::endl;
	this->type = c.type;
}

WrongCat &	WrongCat::operator=( WrongCat const & rhs )
{
	this->type = rhs.type;
	return *this;
}

void WrongCat::makeSound(void) const
{
	std::cout << "Miaou je suis le chat" << std::endl;
}
