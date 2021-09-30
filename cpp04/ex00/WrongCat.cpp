#include "WrongCat.hpp"  
	
WrongCat::WrongCat()
{
	this->type = "WrongCat";
}
	
WrongCat::~WrongCat()
{
	
}

WrongCat::WrongCat(const WrongCat &c)
{
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
